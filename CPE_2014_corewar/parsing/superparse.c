/*
** superparse.c for parsecoper in /home/girard_s/rendu/parsing
**
** Made by Nicolas Girardot
** Login   <girard_s@epitech.net>
**
** Started on  Fri Apr 11 15:03:08 2014 Nicolas Girardot
** Last update Fri Apr 11 01:58:55 2014 Valerian Polizzi
*/

#include <stdlib.h>
#include <stdio.h>

char	*get_str(int i, int j, char *str)
{
  char *res;
  int	temp;
  int	off;

  off = i - j;
  j = j;
  temp = 0;
  res = malloc(i - j + 1);
  if (str[i - 2] == ':')
    {
      while (temp != off)
	{
	  res[temp] = str[j];
	  temp++;
	  j++;
	}
      printf("%s est un label\n", res);
      return (res);
    }
  if (str[j - 1] == '\n')
    {
      while (temp != off)
	{
	  res[temp] = str[j];
	  temp++;
	  j++;
	}
      printf("%s est une instruction\n", res);
      return (res);
    }
  else
    {
      while (temp != off)
	{
	  res[temp] = str[j];
	  temp++;
	  j++;
	}
      printf("%s est un argument\n", res);
      return (res);
    }
}

void	*nparse(char *str)
{
  int	i;
  int	j;

  j = 0;
  i = 0;
  while (str[i] != '\0')
    {
      while (str[i] != '\n' && str[i] != ' ')
	{
	  i++;
	}
      i++;
      get_str(i, j, str);
      j = i;
    }
}
