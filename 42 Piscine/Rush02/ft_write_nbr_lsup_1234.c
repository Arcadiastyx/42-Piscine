/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_nbr_lsup_1234.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:16:59 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/26 19:11:50 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_write_nbr_lsup_01(char *str, int level)
{
	char	hundredtenthunits[3];
	int		flag_print_level;
	int		flag_000;

	hundredtenthunits[0] = str[0];
	hundredtenthunits[1] = str[1];
	hundredtenthunits[2] = str[2];
	flag_print_level = ft_write_nbr_htu(hundredtenthunits);
	flag_000 = ft_write_nbr_htu000(hundredtenthunits);
	if (flag_print_level == 0 && flag_000 == 0)
	{
		write(1, " ", 1);
		ft_write_ten_power(level);
	}
	return (0);
}

int	ft_write_nbr_lsup_02(char *str, int level)
{
	char	tenthunits[2];
	int		flag_print_level;

	tenthunits[0] = str[0];
	tenthunits[1] = str[1];
	flag_print_level = ft_write_nbr_tu(tenthunits);
	if (flag_print_level == 0)
	{
		write(1, " ", 1);
		ft_write_ten_power(level);
	}
	return (0);
}

int	ft_write_nbr_lsup_03(char *str, int level)
{
	char	tenthunits[2];
	int		flag_print_level;

	flag_print_level = ft_write_nbr_u(str[0]);
	if (flag_print_level == 0)
	{
		write(1, " ", 1);
		ft_write_ten_power(level);
	}
	return (0);
}

int	ft_write_nbr_lsup_04(char *str, int level, int index)
{
	char	hundredtenthunits[3];
	int		flag_print_level;
	int		flag_000;

	hundredtenthunits[0] = str[index];
	hundredtenthunits[1] = str[index + 1];
	hundredtenthunits[2] = str[index + 2];
	if ((hundredtenthunits[0] != '0') || (hundredtenthunits[1] != '0')
		|| (hundredtenthunits[2] != '0'))
	{
		write(1, " ", 1);
		flag_print_level = ft_write_nbr_htu(hundredtenthunits);
		flag_000 = ft_write_nbr_htu000(hundredtenthunits);
		if (flag_print_level == 0 && flag_000 == 0)
		{
			write(1, " ", 1);
			ft_write_ten_power(level);
		}
	}
	return (0);
}

void	ft_write_nbr_lsup_master(char *str, int lev, int ind)
{
	if (ft_strlen(str) % 3 == 0)
	{
		ft_write_nbr_lsup_01(str, lev);
		ind = 3;
	}
	if (ft_strlen(str) % 3 == 2)
	{
		ft_write_nbr_lsup_02(str, lev);
		ind = 2;
	}
	if (ft_strlen(str) % 3 == 1)
	{
		ft_write_nbr_lsup_03(str, lev);
		ind = 1;
	}
	lev--;
	while (lev >= 0)
	{
		ft_write_nbr_lsup_04(str, lev, ind);
		lev--;
		ind += 3;
	}
}
