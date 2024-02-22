/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:47:32 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/19 09:40:50 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (0);
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
/*int main() 
{ 
	printf("%d",ft_sqrt(64));
}*/
