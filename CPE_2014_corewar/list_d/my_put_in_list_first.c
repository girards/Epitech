/*
** my_put_in_list_first.c for list in /home/polizz_v/rendu/libmy
** 
** Made by valeri
** Login   <polizz_v@epitech.net>
** 
** Started on  Tue Apr  1 12:45:27 2014 valeri
** Last update Tue Apr  1 12:45:28 2014 valeri
*/

#include "list.h"
#include "my.h"
#include "xfonc.h"

int		my_put_in_list_first(t_list **list, char *data)
{
  t_list	*elem;
  t_list	*tmp;

  elem = xmalloc(sizeof(t_list));
  elem->data = data;
  elem->next = *list;
  *list = elem;
  return (0);
}
