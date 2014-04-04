/*
** parsing.c for parsing in /home/girard_s/rendu/Epitech/CPE_2014_corewar/assembleur/sources/parse
** 
** Made by Nicolas Girardot
** Login   <girard_s@epitech.net>
** 
** Started on  Wed Apr  2 13:57:36 2014 Nicolas Girardot
** Last update Thu Apr  3 09:01:25 2014 Nicolas Girardot
*/

#include <stdlib.h>

int	go_length(char *line)
{
  int	i;
  int	temp;
  int	res;

  i = 0;
  while (line[i++] != '\"');
  temp = i;
  while (line[i++] != '\n');
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

t_cmd	pars_cmd(char *cmd)
{
  
}

char 	*parse(t_champ champs)
{
  char *name;
  char *comment;
  
  champs.name = get_go(champs.name, go_length(champs.name));
  champs.comment = get_go(champs.comment, go_length(champs.comment));
}
