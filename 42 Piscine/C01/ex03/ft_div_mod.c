/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:41:43 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/10 08:57:33 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 5;

	printf("a : %d et b : %d\n",a,b);
	ft_div_mod(a, b, &div, &mod);
	printf("div : %d mod : %d\n",div,mod);

	return 0;
}*/
