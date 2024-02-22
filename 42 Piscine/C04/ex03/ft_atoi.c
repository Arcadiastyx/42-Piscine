/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 19:10:06 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/15 11:05:48 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <stdlib.h>*/

int	withespace(char *str, int *ptr_i)
{
	int	i;
	int	counter;

	i = 0;
	counter = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
		counter *= -1;
		i++;
	}
	*ptr_i = i;
	return (counter);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	sign = withespace(str, &i);
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}	
/*int main()
{
	int r42;
	int ro;
	char a42[] = " ---+--+1234ab567";
	char bman[] = "---567";
	

	r42 = ft_atoi(a42);
	ro = atoi(bman);

	printf("made in 42 : %d | original : %d",r42,ro); 
	return 0;
}*/
