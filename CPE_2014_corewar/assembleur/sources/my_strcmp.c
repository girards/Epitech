/*
** my_strcmp.c for my_strcmp in /home/polizz_v/rendu/Piscine-C-lib/my
** 
** Made by valeri
** Login   <polizz_v@epitech.net>
** 
** Started on  Sun Nov 10 17:48:44 2013 valeri
** Last update Thu Mar 27 17:47:52 2014 valeri
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

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
