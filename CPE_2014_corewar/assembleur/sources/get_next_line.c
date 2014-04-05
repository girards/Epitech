/*
** es_get_next_line.c for corewar in /home/girard_s/rendu/Epitech/CPE_2014_corewar/assembleur/sources
** 
** Made by Nicolas Girardot
** Login   <girard_s@epitech.net>
** 
** Started on  Sat Apr  5 16:12:49 2014 Nicolas Girardot
** Last update Sat Apr  5 16:13:39 2014 Nicolas Girardot
*/

#include <unistd.h>
#include <stdlib.h>

char*	add_data_chunk(char *data, int newsize)
{
  char*rtn;
  int	it;

  rtn = malloc(newsize);
  if (rtn == NULL)
    return (NULL);
  it = 0;
  while (it < newsize - 4096)
    {
      rtn[it] = data[it];
      it++;
    }
  free(data);
  return (rtn);
}

int	read_to_buf(const int fd, char *buf, int *it)
{
  *it = 0;
  return (read(fd, buf, 4096));
}

char*	get_next_line(const int fd)
{
  static char	buf[4096];
  static int	it = -1;
  static int	bytes_read = 0;

  char	*rtn;
  int	rtn_it;

  if (it == -1 || it == bytes_read)
    bytes_read = read_to_buf(fd, buf, &it);
  rtn = malloc(4096);
  if (rtn == NULL || bytes_read == 0)
    return (NULL);
  rtn_it = 0;
  while (bytes_read > 0 && buf[it] != '\n')
    {
      rtn[rtn_it] = buf[it];
      it++;
      rtn_it++;
      if (rtn_it % 4096 == 0)
	rtn = add_data_chunk(rtn, rtn_it + 1 + 4096);
      if (it == bytes_read)
	bytes_read = read_to_buf(fd, buf, &it);
    }
  rtn[rtn_it] = '\0';
  it++;
  return (rtn);
}
