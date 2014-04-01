/*
** my_strncmp.c for corewar in /home/girard_s/rendu/Epitech/CPE_2014_corewar/assembleur/sources
** 
** Made by Nicolas Girardot
** Login   <girard_s@epitech.net>
** 
** Started on  Tue Apr  1 13:21:21 2014 Nicolas Girardot
** Last update Tue Apr  1 13:21:23 2014 Nicolas Girardot
*/


int	my_strncmp(char *s1, char *s2, int nb)
{
  int	i;

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
