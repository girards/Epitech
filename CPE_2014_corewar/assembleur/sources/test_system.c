/*
** test_system.c for corewar in /home/mancel_a/rendu/CPE_2014_corewar/assembleur/sources
** 
** Made by mancel_a
** Login   <mancel_a@epitech.net>
** 
** Started on  Wed Mar 26 16:56:18 2014 mancel_a
** Last update Wed Apr  9 14:49:23 2014 mancel_a
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

void  *xmemset(void *b, int c, int len)
{
  int           i;
  unsigned char *p;

  p = b;
  i = 0;
  while (len > 0)
    {
      *p = c;
      p++;
      len--;
    }
  return (b);
}
