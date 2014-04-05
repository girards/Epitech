/*
** assemb.c for Corewar 2014 in /home/girard_s/rendu/corewar
**
** Made by Nicolas Girardot
** Login   <girard_s@epitech.net>
**
** Started on  Thu Feb 27 15:17:04 2014 Nicolas Girardot
** Last update Sat Apr  5 23:17:52 2014 Valerian Polizzi
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
    {
      my_putstr("Error with : ");
      my_putstr(filename);
      my_putstr("\n'.s' extention required\n");
      return (-1);
    }
}
