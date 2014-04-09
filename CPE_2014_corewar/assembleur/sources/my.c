/*
** my.c for corewar in /home/mancel_a/Epitech/Epitech/CPE_2014_corewar/assembleur/sources
** 
** Made by mancel_a
** Login   <mancel_a@epitech.net>
** 
** Started on  Wed Apr  9 14:12:02 2014 mancel_a
** Last update Wed Apr  9 14:14:11 2014 mancel_a
*/

#include <stdlib.h>

int     my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
    }
  my_putchar(nb % 10 + '0');
}

char            *my_strcat(char *dest, char *src)
{
  int           i;
  int           len;

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

int     my_strcmp(char *s1, char *s2)
{
  int   i;

  i = 0;
  while (s2[i] != '\0')
    {
      if (s1[i] == '\0' && s2[i] == '\0')
        return (0);
      if (s1[i] == s2[i])
        i += 1;
      else
        return (1);
    }
  return (1);
}

int     my_strncmp(char *s1, char *s2, int nb)
{
  int   i;

  i = 0;
  while ((s1[i] || s2[i]) && i < nb)
    {
      if (s1[i] < s2[i])
        return (-1);
      if (s1[i] > s2[i])
        return (1);
      i++;
    }
  if (s1[i] < s2[i] && i < nb)
    return (-1);
  if (s1[i] > s2[i] && i < nb)
    return (1);
  return (0);
}
