/*
** my_show_list.c for list in /home/polizz_v/rendu/libmy
** 
** Made by valeri
** Login   <polizz_v@epitech.net>
** 
** Started on  Mon Mar 31 15:02:47 2014 valeri
** Last update Tue Apr  1 13:06:19 2014 valeri
*/

#include <stdlib.h>
#include "list.h"
#include "my.h"

int		my_show_list(t_list *list)
{
  t_list	*tmp;

  tmp = list;
  if (tmp->data == NULL)
    {
      my_putstr("No data in this list\n");
      return (1);
    }
  while (tmp->next != NULL)
    {
      my_putstr(tmp->data);
      my_putchar('\n');
      tmp = tmp->next;
    }
  my_putstr(tmp->data);
  my_putchar('\n');
  return (0);
}
