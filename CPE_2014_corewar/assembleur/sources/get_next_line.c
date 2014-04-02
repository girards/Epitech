/*
** get_next_line.c for get_next_line in /home/mancel_a/rendu/CPE_2014_corewar/assembleur/sources
** 
** Made by mancel_a
** Login   <mancel_a@epitech.net>
** 
** Started on  Wed Mar 26 16:52:31 2014 mancel_a
** Last update Tue Apr  1 14:02:38 2014 valeri
*/

#include <stdlib.h>
#include "../headers/get_next_line.h"

char    *my_strncpy(char *d, char *s, int n)
{
  int   c;

  c = -1;
  while (s[++c] && c < n)
    d[c] = s[c];
  if (c == 0 || n == 0)
    d[c] = 0;
  return (d);
}

static char     *add_to_line(char *ligne, int cur, char *buff, int *start)
{
  char          *new_elem;
  int           old_len;

  old_len = (ligne) ? my_strlen(ligne) : 0;
  new_elem = xmalloc((old_len + cur + 1) * sizeof(*new_elem));
  my_strncpy(new_elem, ligne ? ligne : "", old_len);
  my_strncpy(new_elem + old_len, buff + *start, cur);
  new_elem[old_len + cur] = 0;
  if (ligne)
    free(ligne);
  *start += cur + 1;
  return (new_elem);
}

char            *get_next_line(const int fd)
{
  static char   buff[GNL_BUFF_SIZE + 1];
  static int    in_buf = 1;
  static int    start;
  int           cur;
  char          *ligne;

  ligne = 0;
  cur = 0;
  while (in_buf != 0)
    {
      if (start >= in_buf)
        {
          start = 0;
          if (!(in_buf = read(fd, buff, GNL_BUFF_SIZE)))
            return (ligne);
          if (in_buf == -1)
            exit (EXIT_FAILURE + 0 * write(2, "Impossible à lire\n", 20));
          cur = 0;
        }
      if (buff[start + cur] == '\n')
        return (ligne = add_to_line(ligne, cur, buff, &start));
      if (start + cur == in_buf - 1)
        ligne = add_to_line(ligne, cur + 1, buff, &start);
      ++cur;
    }
  return (NULL);
}
