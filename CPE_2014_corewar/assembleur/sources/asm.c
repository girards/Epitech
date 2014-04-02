/*
** asm.c for asm in /home/mancel_a/rendu/CPE_2014_corewar/assembleur/sources
** 
** Made by mancel_a
** Login   <mancel_a@epitech.net>
** 
** Started on  Wed Mar 26 16:34:51 2014 mancel_a
** Last update Tue Apr  1 16:32:20 2014 valeri
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

void		fill_list(int fd, t_list **champ)
{
  char		*line;

   while ((line = get_next_line(fd)) != NULL)
     {
       if (is_name(line) == 0 || is_comment(line) == 0)
	 my_put_in_list_last(champ, line);
     }
}


int		check_content(t_list **champ)
{
  int		i;
  t_list	*tmp;

  tmp = malloc(sizeof(t_list));
  tmp = champ;
  i = 0;

}
int		main(int ac, char **av)
{
  // t_champ	champs[3];
  int		i;
  int		fd;
  t_list	*champ1;

  champ1 = malloc(sizeof(t_list));
  champ1 = NULL;
  fd = xopen(av[1], O_RDONLY);
  fill_list(fd, &champ1);
  my_show_list(champ1);
  free(champ1);
}
