/*
** my_str_to_wordtab.c for corewar in /home/mancel_a/Epitech/Epitech/CPE_2014_corewar/assembleur/sources
** 
** Made by mancel_a
** Login   <mancel_a@epitech.net>
** 
** Started on  Thu Apr  3 08:48:39 2014 mancel_a
** Last update Sat Apr 12 19:19:51 2014 mancel_a
*/

#include <stdlib.h>
#include "../headers/xfonc.h"

char	**my_str_to_wordtab(char *str)
{
  int	i;
  int	j;
  int	k;
  char	**tab;

  i = 0;
  k = 0;
  tab = xmalloc(my_strlen(str) * sizeof(*tab));
  while (str[k])
    {
      j = 0;
      tab[i] = xmalloc(my_strlen(str) * sizeof(*tab[i]));
      while ((str[k] != ' ' && str[k] != ',') && str[k] != 0)
	tab[i][j++] = str[k++];
      tab[i][j] = 0;
      if (str[k] != 0)
	k++;
      i++;
    }
  tab[i] = 0;
  return (tab);
}
