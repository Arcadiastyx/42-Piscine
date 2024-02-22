/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:19:56 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/27 21:17:19 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*t;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	t = malloc(sizeof(int) * size);
	while (i < size)
	{
		t[i] = min;
		min++;
		i++;
	}
	*range = t;
	return (i);
}

/*int main() 
{ 

	int min;
	int max;
	int *tab;
	int size;
	int i; 

	i = 0;
	min = 10;
	max = 5;
	size =ft_ultimate_range(&tab, min, max);
	while (i < size)
	{ 
		printf("%d, ", tab[i]);
		i++;
	}
}*/
