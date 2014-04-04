/*
** my_printf_func.c for my_printf_func in /home/valer/Epitech/libmy
**
** Made by Valerian Polizzi
** Login   <valer@epitech.net>
**
** Started on  Sat Mar 29 18:09:44 2014 Valerian Polizzi
** Last update Fri Apr  4 13:34:56 2014 valeri
*/

#include <stdarg.h>
#include "my_printf.h"
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
