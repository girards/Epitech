/*
** asm.c for asm in /home/mancel_a/rendu/CPE_2014_corewar/assembleur/sources
**
** Made by mancel_a
** Login   <mancel_a@epitech.net>
**
** Started on  Wed Mar 26 16:34:51 2014 mancel_a
<<<<<<< HEAD
<<<<<<< HEAD
** Last update Tue Apr  8 17:17:07 2014 Valerian Polizzi
=======
** Last update Fri Apr  4 14:22:01 2014 valeri
>>>>>>> 4ed478582128bb6388edf55bb999a4f10c3f6115
=======
** Last update Fri Apr  4 14:55:48 2014 valeri
>>>>>>> e819a970c1cad872f51150dcca173587b34279c9
*/

#include "../headers/asm.h"
#include "../headers/my.h"
#include "../headers/library.h"
#include "../headers/get_next_line.h"
#include "list_d/list.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

t_cmd	parse_cmd(char *cmd);

void	show_champ(t_champ champ)
{
  printf("%s \n%s\n%s\n\n",champ.name, champ.comment, champ.command);
}

t_champ	init_champ()
{
  t_champ tmp;

  tmp.filename = "filename";
  tmp.name = "noname";
  tmp.comment = "nocomment";
  tmp.command = "nocommand";
  return(tmp);
}

int	check_content(t_champ champ)
{
  int	errors;

  errors = 0;
  if (strcmp("noname", champ.name) == 0)
    {
      errors++;
      printf("%s has no '.name' field\n", champ.filename);
    }
  if (strcmp("nocomment", champ.comment) == 0)
    {
    errors++;
    printf("%s has no '.command' field\n", champ.filename);
    }
  if (errors == 0)
    return (0);
  return (1);
}

char	*my_strcat(char *dest, char *src);

int		is_name(char *line)
{
  if (my_strncmp(line, ".name", 5) == 0)
    return (0);
  return (1);
}

char		*cat_str(char *s1, char *s2)
{
  char		*result;
  result = my_strcat(s1, s2);
  result = my_strcat(result, "\n");
  return (result);
}

int		is_comment(char *line)
{
  if (my_strncmp(line, ".comment", 8) == 0)
    return (0);
  return (1);
}

int		is_label(char *line)
{

}

int		is_separator(char c)
{
  if (c == ' ' || c == '\t' || c == ',' || c == '\0')
    return (0);
  return (1);
}

void		get_next_word(char *line)
{
  char		**word_tab;
  int		i;
  int		j;


  j = 0;
  i = 0;
  printf("%d\n", i);

  while (line[i] != '\0')
    {
      while ((is_separator(line[i]) == 0))
	{
	  i++;
	  j++;
	}
      while ((is_separator(line[i]) == 1))
	{
	  while (j != i + 1)
	    my_putchar(line[j++]);
	  i++;
	}
      my_putchar(' ');
    }
}
//while ((is_separator(line[j++]) == 0));



void		fill_cmd(t_cmd *cmd_list, char *line)
{
  int		i;

  i = 0;

}

t_champ		fill_champ(int fd, t_champ champ, char *filename)
{
  t_champ	tmp;
  char		*line;
  char		*cmd;
  t_cmd		*cmd_list;
  int	i;

  i = 0;
  tmp = init_champ();
  tmp.filename = filename;
  cmd = malloc(4096);
  while ((line = get_next_line(fd)) != NULL)
    {
      if (is_name(line) == 0)
	tmp.name = line;
      else if (is_comment(line) == 0)
	tmp.comment = line;
      else
	{
	  if (i == 0)
	    i++;
	  else
	    get_next_word(line);
	}
    }
  tmp.command = cmd;
  if (check_content(tmp) == 0)
    {
      tmp = parse(tmp);

      //  while ((line = get_next_line(
      //tmp.cmd = parse_cmd(tmp.command);
    }
      return (tmp);
}

int		main(int ac, char **av)
{
  int		i;
  int		fd;
  t_champ	champ[4];
  int		j;

  i = 1;
  while (i != ac && is_champ(av[i]) == 0)
    {
      fd = xopen(av[i], O_RDONLY);
      champ[i] = init_champ();
      champ[i] = fill_champ(fd, champ[i], av[i]);
      i++;
    }
}
