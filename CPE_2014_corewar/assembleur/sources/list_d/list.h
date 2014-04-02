/*
** list.h for list in /home/polizz_v/rendu/libmy
** 
** Made by valeri
** Login   <polizz_v@epitech.net>
** 
** Started on  Mon Mar 31 14:50:32 2014 valeri
** Last update Tue Apr  1 16:15:22 2014 valeri
*/

#ifndef LIST_H_
# define LIST_H_

#include <stdlib.h>

typedef struct		s_list
{
  char			*data;
  char			*name;
  struct s_list		*next;

}			t_list;

int			my_put_in_list_first(t_list **list, char *data);
int			my_put_in_list_last(t_list **list, char *data);
int			my_show_list(t_list *list);

#endif
