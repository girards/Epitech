/*
** xfonc.h for xfonc in /home/polizz_v/rendu/Allum1
** 
** Made by valeri
** Login   <polizz_v@epitech.net>
** 
** Started on  Sun Feb 16 16:12:39 2014 valeri
** Last update Mon Mar 31 17:17:30 2014 valeri
*/

#ifndef XFONC_H_
# define XFONC_H_

#include <unistd.h>

void	*xmalloc(int size);
int	xread(int fd, char *buff, int size);
int	xusleep(useconds_t usec);

#endif
