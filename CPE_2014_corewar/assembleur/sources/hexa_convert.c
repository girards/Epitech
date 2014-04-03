/*
** hexa_convert.c for corewar in /home/mancel_a/Epitech/Epitech/CPE_2014_corewar/assembleur/sources
** 
** Made by mancel_a
** Login   <mancel_a@epitech.net>
** 
** Started on  Thu Apr  3 09:19:44 2014 mancel_a
** Last update Thu Apr  3 09:31:06 2014 mancel_a
*/

long		hexa_convert(char hex[])
{
  size_t	i;
  long		dec;
  long		temp;
  const int	hexa1;
  const int	hexa2;
  const int	digit;

  i = 0;
  dec = 0;
  temp = 0;
  while (hex[i] != '\0')
    {
      hexa1 = (hex[i] >= 'A') && (hex[i] <= 'F');
      hexa2 = (hex[i] >= 'a') && (hex[i] <= 'f');
      digit = (hex[i] >= '0') && (hex[i] <= '9');
      if (hexa1)
	temp = hex[i] - 'a' + 10;
      else if (hexa2)
	temp = hex[i] - 'A' + 10;
      else if (digit)
	temps = hex[i] - '0';
      dec = dec * 16 + temp;
      i = i + 1;
    }
  return (dec);
}
