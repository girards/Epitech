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
