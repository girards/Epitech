/*
** my_printf.c for my_printf in /home/valer/Epitech/libmy
**
** Made by Valerian Polizzi
** Login   <valer@epitech.net>
**
** Started on  Sat Mar 29 17:47:29 2014 Valerian Polizzi
** Last update Fri Apr  4 13:45:47 2014 valeri
*/

#include	<stdlib.h>
#include	<stdarg.h>
#include	"my_printf.h"
#include	"../headers/my.h"

int		str(va_list list);
int		nbr(va_list list);

flag		*tab_func(flag *tab_func)
{
  //  tab_func = xmalloc(sizeof(flag) * 3);
  tab_func[0] = str;
  tab_func[1] = nbr;
  return (tab_func);
}

char		*tab(char *tab)
{
  //tab = xmalloc(sizeof(flag) * 2);
  tab[0] = 's';
  tab[1] = 'd';
  return (tab);
}

int		corresp(char *format, char *flag_tab, flag *func_tab, int i, va_list ap)
{
  int		j;

  j = 0;
  while ((format[i] != flag_tab[j]) && (flag_tab[j] != '\0'))
    j++;
  if (flag_tab[j] == '\0')
    {
      my_putchar('%');
      my_putchar(format[i]);
    }
  else
    func_tab[j](ap);
  return (i);
}

int		my_printf(char *format, ...)
{
  va_list	ap;
  flag		*func_tab;
  char		*flag_tab;
  int		i;

  va_start(ap, format);
  func_tab = tab_func(func_tab);
  flag_tab = tab(flag_tab);
  i = 0;
  while (format[i])
    {
      if (format[i] == '%')
	{
	  i++;
	  if (format[i] == '%')
	    my_putchar('%');
	  else
	    corresp(format, flag_tab, func_tab, i, ap);
	}
      else
	my_putchar(format[i]);
      i++;
    }
}