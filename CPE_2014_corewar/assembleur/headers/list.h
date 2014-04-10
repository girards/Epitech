/*
** list.h for list in /home/mancel_a/Epitech/Epitech/CPE_2014_corewar/assembleur/headers
** 
** Made by mancel_a
** Login   <mancel_a@epitech.net>
** 
** Started on  Thu Apr 10 15:57:18 2014 mancel_a
** Last update Thu Apr 10 15:57:19 2014 mancel_a
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
