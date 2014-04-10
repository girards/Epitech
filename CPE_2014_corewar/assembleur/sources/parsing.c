/*
** parsing.c for girard_s in /home/girard_s/rendu/Epitech/CPE_2014_corewar/assembleur/sources
** 
** Made by Nicolas Girardot
** Login   <girard_s@epitech.net>
** 
** Started on  Thu Apr 10 16:54:26 2014 Nicolas Girardot
** Last update Thu Apr 10 16:54:31 2014 Nicolas Girardot
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

t_cmd		parse_cmd(char *cmd_line)
{
  t_cmd		tmp;
  int		i;

  return (tmp);
}

t_champ		parse(t_champ champs)
{
  t_champ tmp;

  tmp.name = get_go(champs.name, go_length(champs.name));
  tmp.comment = get_go(champs.comment, go_length(champs.comment));
  tmp.command = champs.command;
  tmp.filename = champs.filename;
  return (tmp);
}
