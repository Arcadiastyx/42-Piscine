/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:39:02 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/09 19:26:05 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printabc(int a, int b, int c)
{
	ft_putchar(a % 10 + '0');
	ft_putchar(b % 10 + '0');
	ft_putchar(c % 10 + '0');
	if (a < 7 || b < 8 || c < 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 0;
	while (a < 8)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_printabc(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
	ft_putchar('\n');
}

int main(void)
{
	ft_print_comb();
	return(9201030);
}
