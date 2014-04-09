/*
** main.c for main in /home/mancel_a/Epitech/Epitech/CPE_2014_corewar/assembleur/sources
** 
** Made by mancel_a
** Login   <mancel_a@epitech.net>
** 
** Started on  Wed Apr  9 14:01:52 2014 mancel_a
** Last update Wed Apr  9 15:01:20 2014 mancel_a
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

int     check_content(t_champ champ)
{
  int   errors;
  
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

t_champ         fill_champ(int fd, t_champ champ, char *file)
{
  t_champ       tmp;
  char          *line;
  char          *cmd;

  tmp = init_champ();
  tmp.filename = file;
  cmd = malloc(4096);
  while ((line = get_next_line(fd)) != NULL)
    {
      if (is_name(line) == 0)
        tmp.name = line;
      else if (is_comment(line) == 0)
        tmp.comment = line;
      else
        cmd = cat_str(cmd, line);
    }
  tmp.command = cmd;
  if (check_content(tmp) == 0)
    tmp = parse(tmp);
  return (tmp);
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
      i++;
    }
}
