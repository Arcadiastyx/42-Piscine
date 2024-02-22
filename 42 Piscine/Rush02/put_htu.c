/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_dic.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:53:24 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/26 18:43:06 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_write_nbr_u(char c)
{
	if (c == '1')
		write(1, "one", ft_strlen("one"));
	if (c == '2')
		write(1, "two", ft_strlen("two"));
	if (c == '3')
		write(1, "three", ft_strlen("three"));
	if (c == '4')
		write(1, "four", ft_strlen("four"));
	if (c == '5')
		write(1, "five", ft_strlen("five"));
	if (c == '6')
		write(1, "six", ft_strlen("six"));
	if (c == '7')
		write(1, "seven", ft_strlen("seven"));
	if (c == '8')
		write(1, "eight", ft_strlen("eight"));
	if (c == '9')
		write(1, "nine", ft_strlen("nine"));
	return (0);
}

int	ft_write_nbr_tu_begin_child(char *c)
{
	if (c[0] == '1')
	{
		if (c[1] == '0')
			write(1, "ten", ft_strlen("ten"));
		else if (c[1] == '1')
			write(1, "eleven", ft_strlen("eleven"));
		else if (c[1] == '2')
			write(1, "twelve", ft_strlen("twelve"));
		else if (c[1] == '3')
			write(1, "thirteen", ft_strlen("thirteen"));
		else if (c[1] == '4')
			write(1, "fourteen", ft_strlen("fourteen"));
		else if (c[1] == '5')
			write(1, "fifteen", ft_strlen("fifteen"));
		else if (c[1] == '6')
			write(1, "sixteen", ft_strlen("sixteen"));
		else if (c[1] == '7')
			write(1, "seventeen", ft_strlen("seventeen"));
		else if (c[1] == '8')
			write(1, "eighteen", ft_strlen("eighteen"));
		else if (c[1] == '9')
			write(1, "nineteen", ft_strlen("nineteen"));
		return (0);
	}
	return (1);
}

int	ft_write_nbr_tu_end(char *c)
{
	if (c[0] == '2')
		write(1, "twenty", ft_strlen("twenty"));
	else if (c[0] == '3')
		write(1, "thirty", ft_strlen("thirty"));
	else if (c[0] == '4')
		write(1, "fourty", ft_strlen("fourty"));
	else if (c[0] == '5')
		write(1, "fifty", ft_strlen("fifty"));
	else if (c[0] == '6')
		write(1, "sixty", ft_strlen("sixty"));
	else if (c[0] == '7')
		write(1, "seventy", ft_strlen("seventy"));
	else if (c[0] == '8')
		write(1, "eighty", ft_strlen("eighty"));
	else if (c[0] == '9')
		write(1, "ninety", ft_strlen("ninety"));
	if (c[0] != '1')
	{
		write(1, " ", 1);
		ft_write_nbr_u(c[1]);
	}
	return (0);
}

int	ft_write_ten_power(int level)
{
	if (level == 1)
		write(1, "thousand", ft_strlen("thousand"));
	if (level == 2)
		write(1, "million", ft_strlen("million"));
	if (level == 3)
		write(1, "billion", ft_strlen("billion"));
	if (level == 4)
		write(1, "trillion", ft_strlen("trillion"));
	if (level == 5)
		write(1, "quadrillion", ft_strlen("quadrillion"));
	if (level == 6)
		write(1, "quintillion", ft_strlen("quintillion"));
	if (level == 7)
		write(1, "sextillion", ft_strlen("sextillion"));
	if (level == 8)
		write(1, "septillion", ft_strlen("septillion"));
	if (level == 9)
		write(1, "octillion", ft_strlen("octillion"));
	if (level == 10)
		write(1, "nonillion", ft_strlen("nonillion"));
	if (level == 11)
		write(1, "decillion", ft_strlen("decillion"));
	if (level == 12)
		write(1, "undecillion", ft_strlen("undecillion"));
	return (0);
}
