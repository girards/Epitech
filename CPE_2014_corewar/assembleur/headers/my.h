/*
** my.h for my in /home/polizz_v/rendu/libmy
**
** Made by valeri
** Login   <polizz_v@epitech.net>
**
** Started on  Thu Mar 27 17:42:48 2014 valeri
** Last update Mon Mar 31 17:16:59 2014 valeri
*/

#ifndef MY_H_
# define MY_H_

#include <stdarg.h>

typedef	int (*flag)(va_list list);

void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strlen(char *str);
int	my_strcmp(char *str);
int	my_strncmp(char *s1, char *s2, int nb);
int	my_isneg(char *nb);
int	my_put_nbr(int nb);
int	my_getnbr(char *str);
int	my_printf(char *format, ...);

#endif
