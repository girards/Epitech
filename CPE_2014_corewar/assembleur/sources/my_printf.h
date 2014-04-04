/*
** my_printf.h for my_printf in /home/polizz_v/Github/Epitech/libmy
** 
** Made by valeri
** Login   <polizz_v@epitech.net>
** 
** Started on  Mon Mar 31 17:27:28 2014 valeri
** Last update Fri Apr  4 13:32:16 2014 valeri
*/

#ifndef MY_PRINTF_H_
# define MY_PRINTF_H_

typedef int	(*flag)(va_list list);

int		str(va_list list);
int		nbr(va_list list);
flag		*tab_func(flag *tab_func);
char		*tab(char *tab);
int		corresp(char *format, char *flag_tab, flag *glag_tab, int i, va_list ap);

#endif
