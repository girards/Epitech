/*
** main.c for main in /home/mancel_a/Epitech/Epitech/CPE_2014_corewar/assembleur/sources
**
** Made by mancel_a
** Login   <mancel_a@epitech.net>
**
** Started on  Wed Apr  9 14:01:52 2014 mancel_a
** Last update Thu Apr 10 18:19:05 2014 Valerian Polizzi
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../headers/asm.h"
#include "../headers/my.h"
#include "../headers/get_next_line.h"
#include "../headers/list.h"


int	check_name(t_champ champ)
{
  if (strcmp("noname", champ.name) == 0)
    {
      printf("%s has no '.name' field\n", champ.filename);
      return (1);
    }
  return (0);
}

int	check_comment(t_champ champ)
{
  if (strcmp("nocomment", champ.comment) == 0)
    {
      printf("%s has no '.comment' field\n", champ.filename);
      return (1);
    }
  return (0);
}

int     check_content(t_champ champ)
{
  if (check_name(champ) == 0 || check_comment(champ) == 0)
    return (0);
  return (1);
}

char            *get_next_word(char *line)
{
  int           i;
  int           j;
  int           x;
  char          *elem;

  x = 0;
  j = 0;
  i = 0;
  elem = malloc(1080);
  while (line[i] != '\0')
    {
      while ((is_separator(line[i]) == 0))
        {
          i++;
          j++;
	  elem[x] = ' ';
	  x++;
        }
      while ((is_separator(line[i]) == 1))
	{
	  while (j != i + 1)
	    {
	      if (line[j] == '\n')
		j++;
	      else
		{
		  elem[x] = line[j];
		  j++;
		  x++;
		}
	      if (is_separator(line[i - 1]) == 0)
		{
		  elem[x] = ' ';
		  i++;
		}
	    }
	  elem[x] = ' ';
	  i++;
	}
    }
  return (elem);
}

t_champ         fill_champ(int fd, t_champ champ, char *filename)
{
  t_champ       tmp;
  char          *line;
  char          *cmd;
  int           i;

  i = 0;
  cmd = malloc(4096);
  tmp = init_champ();
  while ((line = get_next_line(fd)) != NULL)
    {
      if (is_name(line) == 0)
        tmp.name = line;
      else if (is_comment(line) == 0)
        tmp.comment = line;
      else
        {
	  cmd = realloc(cmd, 4096);
          if (i == 0)
            i++;
          else
	    cmd = cat_str(cmd, get_next_word(line));
        }
    }
  tmp.command = cmd;
  tmp = parse(tmp);
  if (check_content(tmp) == 0)
    return (tmp);
  return (init_champ(tmp));
}

int             main(int ac, char **av)
{
  int           i;
  int           fd;
  t_champ       champ[4];
  int           j;

  i = 1;
  while (i != ac && is_champ(av[i]) == 0)
    {
      fd = xopen(av[i], O_RDONLY);
      champ[i] = init_champ();
      champ[i] = fill_champ(fd, champ[i], av[i]);
      champ[i].filename = av[i];
      if (check_content(champ[i]) == 1)
	{
	  printf("PROGRAM ABORDED");
	  return (1);
	}
	  i++;
    }
}
