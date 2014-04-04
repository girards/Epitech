/*
** assemb.c for Corewar 2014 in /home/girard_s/rendu/corewar
** 
** Made by Nicolas Girardot
** Login   <girard_s@epitech.net>
** 
** Started on  Thu Feb 27 15:17:04 2014 Nicolas Girardot
** Last update Mon Mar 24 15:04:04 2014 Nicolas Girardot
*/

#include <stdlib.h>
#include <stdio.h>

int	is_champ(char *filename)
{
  int	length;

  length = my_strlen(filename) - 1;
  if (filename[length] == 's' && filename[length - 1] == '.')
    return (0);
  else
    return (-1);
}

int	test_champs(char **av)
{
  int	counter;

  counter = 1;
  while (av[counter] != NULL)
    {
      if (is_champ(av[counter]) == 0)
	counter++;
      else
	{
	  my_putstr("File ");
	  my_putstr(av[counter]);
	  my_putstr(" not accessible\n");
	  exit (-1);
	}
    }
}
