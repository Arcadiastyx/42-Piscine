/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_nbr_l_123.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:14:22 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/26 18:35:34 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_write_nbr_l1(char *str)
{
	int	length;

	length = ft_strlen(str);
	if (length == 1)
	{
		if (str[0] != '0')
			ft_write_nbr_u(str[0]);
		else
			write(1, "zero", 5);
		return (0);
	}
	return (1);
}

int	ft_write_nbr_l2(char *str)
{
	int		length;
	char	tenthunits[2];

	length = ft_strlen(str);
	if (length == 2)
	{
		tenthunits[0] = str[0];
		tenthunits[1] = str[1];
		ft_write_nbr_tu(tenthunits);
		return (0);
	}
	return (1);
}

int	ft_write_nbr_l3(char *str)
{
	int		length;
	char	hundredtenthunits[3];

	length = ft_strlen(str);
	if (length == 3)
	{
		hundredtenthunits[0] = str[0];
		hundredtenthunits[1] = str[1];
		hundredtenthunits[2] = str[2];
		if (ft_write_nbr_htu000(hundredtenthunits) == 1)
			return (0);
		ft_write_nbr_htu(hundredtenthunits);
		return (0);
	}
	return (1);
}

int	ft_write_nbr(char *str)
{
	int	length;
	int	level;
	int	index;

	length = ft_strlen(str);
	if ((ft_write_nbr_l1(str)) == 0)
		return (0);
	if ((ft_write_nbr_l2(str)) == 0)
		return (0);
	if ((ft_write_nbr_l3(str)) == 0)
		return (0);
	if (length > 3)
		ft_write_nbr_lsup_master(str, ft_level(str), 0);
	return (0);
}
