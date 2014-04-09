/*
** corewar.h for corewar in /home/mancel_a/rendu/CPE_2014_corewar/assembleur/headers
**
** Made by mancel_a
** Login   <mancel_a@epitech.net>
**
** Started on  Wed Mar 26 16:29:10 2014 mancel_a
** Last update Wed Apr  9 12:12:46 2014 Valerian Polizzi
*/

#ifndef ASM_H_
# define ASM_H_

typedef struct	s_cmd
{
  char		*instruction;
  char		**param;
}		t_cmd;

typedef struct	s_champ
{
  char		*filename;
  char		*name;
  char		*comment;
  char		*command;
  t_cmd		cmd;
}		t_champ;

int		go_lenght(char *line);
char		*get_go(char *line, int lenght);
t_champ		parse(t_champ champs);

#endif
