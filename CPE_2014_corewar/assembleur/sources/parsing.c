/*
** parsing.c for parsing in /home/mancel_a/Epitech/Epitech/CPE_2014_corewar/assembleur/sources
**
** Made by mancel_a
** Login   <mancel_a@epitech.net>
**
** Started on  Thu Apr 10 15:59:11 2014 mancel_a
** Last update Fri Apr 11 01:58:32 2014 Valerian Polizzi
*/

#include <stdlib.h>
#include "../headers/asm.h"

int	go_length(char *line)
{
  int	i;
  int	temp;
  int	res;

  i = 0;
  while (line[i++] != '\"');
  temp = i;
  while (line[i++] != '\0');
  res = i - temp;
  return (res);
}

char	*get_go(char *line, int length)
{
  int	i;
  int	tmp;
  char	*final_name;

  i = 0;
  final_name = malloc((length - 1) * sizeof(char));
  while (line[i++] != '\"');
  tmp = i;
  while (line[i] != '\"')
    {
      final_name[i - tmp] = line[i];
      i++;
    }
  final_name[++i - tmp] = '\0';
  return (final_name);
}

t_champ		parse(t_champ champs)
{
  t_champ tmp;

  tmp.name = get_go(champs.name, go_length(champs.name));
  tmp.comment = get_go(champs.comment, go_length(champs.comment));
  tmp.command = champs.command;
  tmp.filename = champs.filename;
  tmp.error = 0;
  return (tmp);
}
