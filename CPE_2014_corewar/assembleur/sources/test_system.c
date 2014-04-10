/*
** test_system.c for corewar in /home/mancel_a/rendu/CPE_2014_corewar/assembleur/sources
**
** Made by mancel_a
** Login   <mancel_a@epitech.net>
**
** Started on  Wed Mar 26 16:56:18 2014 mancel_a
** Last update Thu Apr 10 18:16:14 2014 Valerian Polizzi
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../headers/xfonc.h"

int     xopen(const char *pathname, int flags)
{
  int   i;

  i = open(pathname, flags);
  if (i == -1)
    {
      my_putstr("FIle does not exist . \n");
      exit (1);
    }
  return (i);
}

int     xread(int fd, void *buffer, int buffsize)
{
  int   i;

  if ((i = read(fd, buffer, buffsize)) == -1)
    {
      my_putstr("Read Error\n");
      exit (1);
    }
  else
    return (i);
}

void    xclose(int fd)
{
  if (close(fd) == -1)
    {
      my_putstr("Close Error\n");
      exit (1);
    }
}

void  *xmemset(char *str)
{
  int           i;

  i = 0;
  while (i != my_strlen(str))
    {
      str[i] = '\0';
      i++;
    }
  return (str);
}
