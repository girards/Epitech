/*
** xfonc.h for xfonc in /home/mancel_a/Epitech/Epitech/CPE_2014_corewar/assembleur/headers
** 
** Made by mancel_a
** Login   <mancel_a@epitech.net>
** 
** Started on  Thu Apr 10 15:57:38 2014 mancel_a
** Last update Thu Apr 10 15:57:41 2014 mancel_a
*/

#include <unistd.h>

#ifndef XFONC_H_
# define XFONC_H_

void	*xmalloc(size_t size);
int	xread(int fd, void *buffer, int buffsize);
int	xusleep(useconds_t usec);

#endif
