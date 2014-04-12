/*
** asm.c for asm in /home/mancel_a/github/Girard_s/Epitech/CPE_2014_corewar/assembleur/sources
** 
** Made by mancel_a
** Login   <mancel_a@epitech.net>
** 
** Started on  Sat Apr 12 18:51:14 2014 mancel_a
** Last update Sat Apr 12 18:51:26 2014 mancel_a
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

t_cmd		parse_cmd(char *cmd);

t_champ		init_champ(char *filename)
{
  t_champ	tmp;

  tmp.filename = "\0";
  tmp.name = "noname";
  tmp.comment = "nocomment";
  tmp.command = "nocommand";
  tmp.error = 0;
  tmp.filename = filename;
  return (tmp);
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

int		is_separator(char c)
{
  if (c == ' ' || c == '\t' || c == ',' || c == '\0')
    return (0);
  return (1);
}
