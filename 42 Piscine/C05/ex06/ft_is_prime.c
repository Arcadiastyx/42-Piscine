/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:31:03 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/19 09:46:18 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*int main() 
{
	printf("%d",ft_is_prime(2000000011));
}*/
