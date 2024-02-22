/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 08:17:30 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/30 08:25:09 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include "ft_stock_str.h"

void	ft_putchar (char c) 
{ 
	write (1, &c,1); 
} 

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while(str[++i])
		write(1, &str[i],1); 
} 

void ft_putnbr(int nb)
{ 
	char tab[12];
	int i; 

	i = 0;
	if (nb == -2147483648)
	{
		write(1,"-2147483648",11);
		return (0);
	} 
	if (nb < 0)
	{ 
		nb = -nb; 
		ft_putchar('-');
	} 
	if (nb == 0)
		ft_putchar ('0');
	while (nb)
	{ 
		tab[i++] = ('0' + nb % 10); 
		nb = nb / 10;
	} 
	while (i)
		ft_putchar (tab[--i]);
} 

void ft_show_tab(struct s_stock_str *par) 
	{
		int i; 

		i = 0;
		while(par[i].str)
		{ 
			ft_putstr(par[i].str);
			ft_putchar('\n');
			ft_putnbr(par[i].size);
			ft_putchar('\n');
			ft_putstr(par[i].copy);
			ft_putchar('\n');
			i++; 
		} 
	}

	
