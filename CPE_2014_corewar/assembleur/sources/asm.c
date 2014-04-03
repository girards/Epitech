/*
** asm.c for asm in /home/mancel_a/rendu/CPE_2014_corewar/assembleur/sources
** 
** Made by mancel_a
** Login   <mancel_a@epitech.net>
** 
** Started on  Wed Mar 26 16:34:51 2014 mancel_a
** Last update Wed Apr  2 16:54:20 2014 valeri
*/

#include "../headers/asm.h"
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

char	*my_strcat(char *dest, char *src);

int		is_name(char *line)
{
  if (my_strncmp(line, ".name", 5) == 0)
    return (0);
  return (1);
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

  cmd = malloc(4096);
  while ((line = get_next_line(fd)) != NULL)
    {
      printf("%s\n", line);
      if (is_name(line) == 0)
	{
	  tmp.name = line;
	}
      else if (is_comment(line) == 0)
	tmp.comment = line;
      else
	{
	  cmd = my_strcat(cmd, line);
	  cmd = my_strcat(cmd, "\n");
	}
    }
  line = "wait";
  tmp.command = cmd;
  return (tmp);
}

int		main(int ac, char **av)
{
  int		i;
  int		fd;
  t_champ	champ[2];
  int		j;

  j = 0;
  //champ[0] = malloc(sizeof(t_champ));
  //champ[1] = malloc(sizeof(t_champ));
  fd = xopen(av[1], O_RDONLY);
  champ[0] = fill_champ(fd, champ[0]);
  fd = xopen(av[2], O_RDONLY);
  printf("%d\n", fd);
  champ[1] = fill_champ(fd, champ[1]);
  printf("%s ", champ[0].name);
  printf("%s ", champ[1].name);
}
