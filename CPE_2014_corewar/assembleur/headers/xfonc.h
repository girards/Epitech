/*
** xfonc.h for xfonc in /home/polizz_v/rendu/Allum1
** 
** Made by valeri
** Login   <polizz_v@epitech.net>
** 
** Started on  Sun Feb 16 16:12:39 2014 valeri
** Last update Tue Apr  1 13:32:06 2014 valeri
*/

#include <unistd.h>

#ifndef XFONC_H_
# define XFONC_H_

void	*xmalloc(size_t size);
int	xread(int fd, void *buffer, int buffsize);
int	xusleep(useconds_t usec);

#endif
