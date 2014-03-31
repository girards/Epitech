/*
** asm.c for asm in /home/mancel_a/rendu/CPE_2014_corewar/assembleur/sources
** 
** Made by mancel_a
** Login   <mancel_a@epitech.net>
** 
** Started on  Wed Mar 26 16:34:51 2014 mancel_a
** Last update Mon Mar 31 14:55:50 2014 Nicolas Girardot
*/

#include "../headers/asm.h"
#include "../headers/library.h"
#include <unistd.h>                                                                          
#include <stdlib.h>                                                                          
#include <stdio.h>                                                                           
#include <string.h>                                                                         
#include <sys/types.h>                                                                       
#include <sys/stat.h>                                                                       
#include <fcntl.h>

char		*get_champ_name(int fd)
{
  char *line;
  
  while (my_strncmp(line = get_next_line(fd), ".name", 5) != 0);
  printf("%s\n", line);
}

int		main(int ac, char **av)
{
  t_champ	champs[3];
  int		i;
  int		fd;
  
  i = 1;
  fd = open(av[1], O_RDONLY);
  get_champ_name(fd);
  i++;
}
