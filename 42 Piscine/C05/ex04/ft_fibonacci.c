/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:09:13 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/16 16:46:53 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{	
		return (1);
	}
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}
/*int main()
{ 
	printf("%d",ft_fibonacci(10)); 
}*/
