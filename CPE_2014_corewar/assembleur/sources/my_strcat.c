/*
** my_strcat.c for my_strcat in /home/polizz_v/Github/girardo/Epitech/CPE_2014_corewar/assembleur/sources
** 
** Made by valeri
** Login   <polizz_v@epitech.net>
** 
** Started on  Wed Apr  2 12:30:08 2014 valeri
** Last update Wed Apr  2 13:50:00 2014 valeri
*/

#include <stdlib.h>

char		*my_strcat(char *dest, char *src)
{
  int		i;
  int		len;

  i = 0;
  len = my_strlen(dest);
  while (src[i] != '\0')
    {
      dest[len + i] = src[i];
      i = i + 1;
    }
  dest[len + i] = '\0';
  return (dest);
}
