/*
** my_put_in_list_first.c for list in /home/polizz_v/rendu/libmy
**
** Made by valeri
** Login   <polizz_v@epitech.net>
**
** Started on  Tue Apr  1 12:45:27 2014 valeri
** Last update Wed Apr  9 14:18:12 2014 mancel_a
*/

#include "../../headers/list.h"
#include "../../headers/asm.h"

int		my_put_in_list_first(t_list **list, t_cmd data)
{
  t_list *elem;

  elem = malloc(sizeof(t_list));
  elem->data = data;
  elem->next = *list;
  *list = elem;
  return (0);
}
