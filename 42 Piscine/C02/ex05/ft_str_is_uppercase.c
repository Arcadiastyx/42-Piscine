/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:50:50 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/11 13:40:06 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
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
	int upper;

	char a[] = "ABC";
	upper = ft_str_is_uppercase(a);
	printf("je suis une majuscule ou pas ? : %d\n", upper);
   ireturn 0;
}*/
