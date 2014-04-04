/*
** xmalloc.c for xfonc in /home/polizz_v/rendu/Allum1/src/xfonc
** 
** Made by valeri
** Login   <polizz_v@epitech.net>
** 
** Started on  Sun Feb 16 16:03:19 2014 valeri
** Last update Fri Apr  4 13:43:40 2014 valeri
*/

#include <stdlib.h>
#include "../headers/my.h"

void	*xmalloc(size_t size)
{
  void	*x;

  x = malloc(size);
  if (x == NULL)
    {
      my_putstr("error");
      return (NULL);
    }
  return (x);
}
