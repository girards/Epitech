/*
** get_next_line.h for get in /home/mancel_a/rendu/Semestre 2/Allum1
** 
** Made by mancel_a
** Login   <mancel_a@epitech.net>
** 
** Started on  Wed Feb  5 16:17:37 2014 mancel_a
** Last update Wed Apr  9 14:45:08 2014 mancel_a
*/

#ifndef _GET_NEXT_LINE_H_
# define _GET_NEXT_LINE_H_

#define		GNL_BUFF_SIZE   64

char            *get_next_line(const int fd);
char		*my_strncpy(char *d, char *s, int n);
static char     *add_to_line(char *line, int cur, char *buff, int *start);
void		*xmalloc(unsigned int s);
void		xfree(void *p);

#endif
