/*
** my_show_list.c for list in /home/polizz_v/rendu/libmy
** 
** Made by valeri
** Login   <polizz_v@epitech.net>
** 
** Started on  Mon Mar 31 15:02:47 2014 valeri
** Last update Tue Apr  1 14:57:31 2014 valeri
*/

#include <stdlib.h>
#include "list.h"
#include "../../headers/asm.h"

int		my_show_list(t_list *list)
{
  t_list	*tmp;

  tmp = list;
  if (tmp->data == NULL)
    {
      my_putstr("No data in this list\n");
      return (1);
    }
  else
    {
      while (tmp->next != NULL)
	{
	  my_putstr(tmp->data);
	  my_putchar('\n');
	  tmp = tmp->next;
	}
      my_putstr(tmp->data);
      my_putchar('\n');
    }
  return (0);
}
