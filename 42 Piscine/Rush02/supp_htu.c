/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   supp_htu.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:01:16 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/26 19:10:16 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_write_nbr_tu_begin(char *c)
{
	int	flag_return;

	if (c[0] == '0')
	{
		ft_write_nbr_u(c[1]);
		return (0);
	}
	return (1);
}

int	ft_write_nbr_tu(char *c)
{
	int	flag_return;

	flag_return = ft_write_nbr_tu_begin(c);
	if (flag_return == 0)
		return (0);
	flag_return = ft_write_nbr_tu_begin_child(c);
	if (flag_return == 0)
		return (flag_return);
	ft_write_nbr_tu_end(c);
	return (0);
}

int	ft_write_nbr_htu000(char *str)
{
	if ((str[0] == '0') && (str[1] == '0') && (str[2] == '0'))
		return (1);
	return (0);
}

int	ft_write_nbr_htu(char *str)
{
	char	tenthunits[2];

	if ((str[0] == '0') && (str[1] == '0'))
		ft_write_nbr_u(str[2]);
	else if (str[0] == '0')
	{
		tenthunits[0] = str[1];
		tenthunits[1] = str[2];
		ft_write_nbr_tu(tenthunits);
	}
	else
	{
		ft_write_nbr_u(str[0]);
		write(1, " ", 1);
		write(1, "hundred", ft_strlen("hundred"));
		if ((str[1] != '0') || (str[2] != '0'))
		{
			tenthunits[0] = str[1];
			tenthunits[1] = str[2];
			write(1, " ", 1);
			ft_write_nbr_tu(tenthunits);
		}
	}
	return (0);
}

int	ft_level(char *str)
{
	int	length;

	length = ft_strlen(str);
	if (length <= 3)
		return (0);
	else
	{
		length = (length - 1) / 3;
		return (length);
	}
}
