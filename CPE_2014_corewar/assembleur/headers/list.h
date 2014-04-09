/*
1;3201;0c** list.h for list in /home/polizz_v/rendu/libmy
**
** Made by valeri
** Login   <polizz_v@epitech.net>
**
** Started on  Mon Mar 31 14:50:32 2014 valeri
** Last update Wed Apr  9 14:46:10 2014 mancel_a
*/

#ifndef LIST_H_
# define LIST_H_

#include <stdlib.h>
#include "asm.h"

typedef struct		s_list
{
  t_cmd			data;
  struct s_list       	*next;
}			t_list;

int			my_put_in_list_first(t_list **list, t_cmd data);
int			my_put_in_list_last(t_list **list, t_cmd  data);
int			my_show_list(t_list *list);

#endif
