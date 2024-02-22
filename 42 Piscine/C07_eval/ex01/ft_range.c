/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:34:46 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/26 09:42:11 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h> 

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*int main () 
{
	int min = 1; 
	int max = 10; 
	int *tab; 
	int i = 0; 
	int size; 

	size = max - min; 
	tab = ft_range(min,max); 
	while ( i < size) 
	{
		printf("%d",tab[i]);
		printf("%c",'\n');
		i++; 
	} 
}*/
