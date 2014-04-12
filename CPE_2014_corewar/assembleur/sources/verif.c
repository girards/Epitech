/*
** assemb.c for Corewar 2014 in /home/girard_s/rendu/corewar
**
** Made by Nicolas Girardot
** Login   <girard_s@epitech.net>
**
** Started on  Thu Feb 27 15:17:04 2014 Nicolas Girardot
** Last update Sat Apr 12 19:17:27 2014 mancel_a
*/

#include <stdlib.h>
#include <stdio.h>
#include "../headers/xfonc.h"
#include "../headers/asm.h"
#include "../headers/my.h"

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

int     check_name(t_champ champ)
{
  if (strcmp("noname", champ.name) == 0)
    {
      my_putstr(champ.name);
      my_putstr(" has no '.name' field.\n");
      return (1);
    }
  return (0);
}

int     check_comment(t_champ champ)
{
  if (strcmp("nocomment", champ.comment) == 0)
    {
      my_putstr(champ.filename);
      my_putstr(" has no '.comment' field.\n");
      return (1);
    }
  return (0);
}

int     check_content(t_champ champ)
{
  if (check_name(champ) == 0 && check_comment(champ) == 0)
    return (0);
  return (1);
}
