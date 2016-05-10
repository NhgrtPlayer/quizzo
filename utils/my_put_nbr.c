/*
** my_put_nbr.c for Quizzo in /home/player/Programmes perso/Quizzo/utils/
**
** Made by Merwan Lara
** Login   <lara_m@epitech.net>
**
** Started on  Tue May 10 11:37:02 2016 Merwan Lara
** Last update Tue May 10 11:37:05 2016 Merwan Lara
*/

#include "utils.h"

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      nb = nb * (-1);
      my_putchar('-');
    }
  if ((nb / 10) > 0)
    my_put_nbr(nb / 10);
  my_putchar(nb % 10 + '0');
  return (0);
}
