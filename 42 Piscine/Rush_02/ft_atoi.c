/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:15:17 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/25 14:18:59 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_atoi(char *str)
{
	int		i;
	int		j;
	char	*array;

	i = 0;
	j = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (i == 0)
		return (0);
	array = malloc(sizeof(*array) * (i + 1));
	if (!array)
		return (0);
	i = 0;
	while (str[i] == '0')
		i++;
	array[0] = '0';
	while (str[i] >= '1' && str[i] <= '9')
	{
		array[j] = str[i];
		i++;
		j++;
	}
	array[i] = '\0';
	return (array);
}
