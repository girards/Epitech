/*
** my_put_in_list_last.c for list in /home/polizz_v/rendu/libmy
**
** Made by valeri
** Login   <polizz_v@epitech.net>
**
** Started on  Tue Apr  1 12:45:38 2014 valeri
** Last update Mon Apr  7 17:16:00 2014 Valerian Polizzi
*/

#include <stdlib.h>
#include "list.h"
#include "../../headers/asm.h"

int		my_put_in_list_last(t_list **list, t_cmd data)
{
  t_list      	*elem;
  t_list	*tmp;

  elem = malloc(sizeof(t_list));
  elem->data = data;
  elem->next = NULL;
  if (*list == NULL)
    my_put_in_list_first(list, data);
  else
    {
      tmp = malloc(sizeof(t_list));
      tmp = *list;
      while (tmp->next != NULL)
	tmp = tmp->next;
      tmp->next = elem;
    }
  return (0);
}
