/*
** main.c for main in /home/mancel_a/Epitech/Epitech/CPE_2014_corewar/assembleur/sources
**
** Made by mancel_a
** Login   <mancel_a@epitech.net>
**
** Started on  Wed Apr  9 14:01:52 2014 mancel_a
** Last update Sat Apr 12 19:18:10 2014 mancel_a
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
#include "../headers/xfonc.h"

char            *get_next_word(char *line)
{
  int           i;
  int           j;
  int           x;
  char          *elem;

  x = 0;
  j = 0;
  i = 0;
  elem = xmalloc(1080);
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

t_champ		parse_cmd(t_champ tmp, char *cmd)
{
  if (check_content(tmp) == 0)
    {
      tmp.command = cmd;
      tmp = parse(tmp);
    }
  else
     tmp.error = 1;
  return (tmp);
}

t_champ         fill_champ(int fd, t_champ champ, char *filename)
{
  t_champ       tmp;
  char          *line;
  char          *cmd;
  int           i;

  i = 0;
  cmd = xmalloc(4096);
  tmp = init_champ(filename);
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
  tmp = parse_cmd(tmp, cmd);
  return (tmp);
}

int		check_champ(t_champ champ)
{
  if (champ.error == 1)
    {
      my_putstr("Error, program aborded\n");
      return (1);
    }
  return (0);
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
      champ[i] = init_champ(av[i]);
      champ[i] = fill_champ(fd, champ[i], av[i]);
      if (check_champ(champ[i]) == 1)
	return (1);
      nparse(champ[i].command);
      i++;
    }
}
