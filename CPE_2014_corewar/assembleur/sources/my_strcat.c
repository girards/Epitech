/*
** my_strcat.c for my_strcat in /home/polizz_v/Github/girardo/Epitech/CPE_2014_corewar/assembleur/sources
** 
** Made by valeri
** Login   <polizz_v@epitech.net>
** 
** Started on  Wed Apr  2 12:30:08 2014 valeri
** Last update Wed Apr  2 12:43:18 2014 valeri
*/

#include <stdlib.h>

char		*my_strcat(char *dest, char *src)
{
  char		*result;
  int		i;
  int		j;

  result = malloc(sizeof(char) * my_strlen(dest) + my_strlen(src));
  i = 0;
  j = 0;
  while (src[i] != '\0')
    {
      result[i] = dest[i];
      i++;
    }
  while (dest[j] != '\0')
  {
    result[i] = src[j];
    i++;
    j++;
  }
  return (result);
}
