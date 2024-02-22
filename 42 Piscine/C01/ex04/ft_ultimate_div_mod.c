/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 20:09:05 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/10 09:17:21 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*int main()
{
	int	a;
	int b;

	a = 42;
	b = 5;
	ft_ultimate_div_mod(&a,&b);
	printf("je stock le resultat de la div : %d\n",a);
	printf("je stock le resultat du mod : %d\n",b);

	return 0;
}*/
