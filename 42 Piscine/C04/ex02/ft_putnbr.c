/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 10:39:43 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/14 18:42:08 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar ('-');
		ft_putchar ('2');
		nb = 147483648;
	}
	if (nb < 0)
	{	
		ft_putchar ('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}
/*#include <limits.h>
#include <stdio.h>
int main ()
{
		printf("%d\n",INT_MAX);
		printf("%d\n",-INT_MIN);
		printf("%d\n",INT_MIN);
		ft_putnbr(100);	
		return (0);
}*/
