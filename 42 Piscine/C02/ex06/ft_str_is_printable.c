/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:34:34 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/11 13:57:13 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 127))
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*int main()
{
	int printa;

	char a[] = "\n";
	printa = ft_str_is_printable(a);
		printf("je suis un printable ou pas ? : %d\n",printa);
	return 0;
}*/
