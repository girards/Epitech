/*
** my_printf_func.c for my_printf_func in /home/valer/Epitech/libmy
**
** Made by Valerian Polizzi
** Login   <valer@epitech.net>
**
** Started on  Sat Mar 29 18:09:44 2014 Valerian Polizzi
** Last update Wed Apr  9 14:25:17 2014 mancel_a
*/

#include <stdarg.h>
#include "../headers/my_printf.h"
#include "../headers/my.h"

int	nbr(va_list list)
{
  int	nb;

  nb  = va_arg(list, int);
  my_put_nbr(nb);
}

int	str(va_list list)
{
  char	*str;

  str = va_arg(list, char *);
  my_putstr(str);
}
