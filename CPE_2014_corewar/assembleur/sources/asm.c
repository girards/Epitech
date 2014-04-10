/*
** asm.c for asm in /home/mancel_a/Epitech/Epitech/CPE_2014_corewar/assembleur/sources
**
** Made by mancel_a
** Login   <mancel_a@epitech.net>
**
** Started on  Wed Apr  9 15:16:45 2014 mancel_a
** Last update Thu Apr 10 15:47:33 2014 Valerian Polizzi
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

t_champ		init_champ()
{
  t_champ	tmp;

  tmp.filename = "filename";
  tmp.name = "noname";
  tmp.comment = "nocomment";
  tmp.command = "nocommand";
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
