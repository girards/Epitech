/*
** my_put_nbr.c for my_put_nbr in /home/polizz_v/rendu/Piscine-C-lib/my
** 
** Made by valeri
** Login   <polizz_v@epitech.net>
** 
** Started on  Sun Nov 10 14:49:53 2013 valeri
** Last update Sun Nov 17 23:36:08 2013 valeri
*/

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
    }
  my_putchar(nb % 10 + '0');
}
