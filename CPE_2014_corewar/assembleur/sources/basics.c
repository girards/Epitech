/*
** basics.c for corewar in /home/mancel_a/rendu/CPE_2014_corewar/assembleur/sources
** 
** Made by mancel_a
** Login   <mancel_a@epitech.net>
** 
** Started on  Wed Mar 26 16:54:31 2014 mancel_a
** Last update Wed Mar 26 16:56:01 2014 mancel_a
*/

#include <stdlib.h>
#include <stdio.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void    my_putstr(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int     my_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
