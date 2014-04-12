/*
** my_printf.c for corewar in /home/mancel_a/Epitech/Epitech/CPE_2014_corewar/assembleur/sources
** 
** Made by mancel_a
** Login   <mancel_a@epitech.net>
** 
** Started on  Sat Apr 12 15:11:39 2014 mancel_a
** Last update Sat Apr 12 16:48:31 2014 mancel_a
*/

#include <stdlib.h>
#include <stdarg.h>
#include "../headers/my.h"


int	what(char *format, char *flag_t, flag *fonc_t, va_list ap, int i)
{
  int	j;

  j = 0;
  while ((format[i] != flag_t[j]) && (flag_t[j] != '\0'))
      j++;
  if (flag_t[j] == '\0')
    {
      my_putchar('%');
      my_putchar(format[i]);
    }
  else
    fonc_t[j](ap);
  return (i);
}

char	*tab(char *tab)
{
  tab = malloc(sizeof(char) * 1);
  tab[0] = 's';
  return (tab);
}

flag	*fonc(flag *fonc)
{
  fonc = malloc(sizeof(flag) * 1);
  fonc[0] = str;
  return (fonc);
}

int		my_printf(char *format, ...)
{
  va_list	ap;
  flag		*fonc_t;
  char		*flag_t;
  int		i;

  va_start(ap, format);
  fonc_t = fonc(fonc_t);
  flag_t = tab(flag_t);
  i = 0;
  while (format[i] != '\0')
    {
      if (format[i] == '%')
	{
	  i++;
	  if (format[i] == '%')
	    my_putchar('%');
	  else
	    what(format, flag_t, fonc_t, ap, i);
	}
      else
	my_putchar(format[i]);
      i++;
    }
}
