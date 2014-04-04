/*
** asm.c for asm in /home/mancel_a/rendu/CPE_2014_corewar/assembleur/sources
** 
** Made by mancel_a
** Login   <mancel_a@epitech.net>
** 
** Started on  Wed Mar 26 16:34:51 2014 mancel_a
** Last update Fri Apr  4 15:58:12 2014 Nicolas Girardot
*/

#include "../headers/asm.h"
#include "../headers/my.h"
#include "../headers/library.h"
#include "../headers/get_next_line.h"
#include "list_d/list.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

t_champ	init_champ()
{
  t_champ tmp;
  tmp.name = "noname";
  tmp.comment = "nocomment";
  tmp.command = "nocommand";
  return(tmp);
}

int	check_content(t_champ champ)
{
  if (strcmp("noname", champ.name) == 0)
    {
      my_putstr("missing field in champ.\n");
      return (1);
    }
    return (0);
}

char	*my_strcat(char *dest, char *src);

int		is_name(char *line)
{
  if (my_strncmp(line, ".name", 5) == 0)
    return (0);
  return (1);
}

char		*cat_str(char *s1, char *s2)
{
  char		*result;
  result = my_strcat(s1, s2);
  result = my_strcat(result, "\n");
  return (result);
}

int		is_comment(char *line)
{
  if (my_strncmp(line, ".comment", 8) == 0)
    return (0);
  return (1);
}

t_champ		fill_champ(int fd, t_champ champ)
{
  t_champ	tmp;
  char		*line;
  char		*cmd;

  tmp = init_champ();
  cmd = malloc(4096);
  while ((line = eget_next_line(fd)) != NULL)
    {
      if (is_name(line) == 0)
	tmp.name = line;
      else if (is_comment(line) == 0)
	tmp.comment = line;
      else
	cmd = cat_str(cmd, line);
    }
  tmp.command = cmd;
  if (check_content(tmp) == 0)
    return (tmp);
  else
    return (champ);
}

int		main(int ac, char **av)
{
  int		i;
  int		fd;
  t_champ	champ[4];
  int		j;

  i = 1;
  while (i != ac)
    {
      fd = xopen(av[i], O_RDONLY);
      champ[i] = init_champ();
      champ[i] = fill_champ(fd, champ[i]);
      printf("%s\n %s\n %s\n", champ[i].name, champ[i].comment, champ[i].command);
      i++;
    }
}
