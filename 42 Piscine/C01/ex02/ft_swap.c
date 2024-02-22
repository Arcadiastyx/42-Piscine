/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:30:56 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/10 08:45:41 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*int main()
{
	int a;
	int b;

	a = 21;
	b = 42;

	ft_swap(&a, ,&b);
	printf("je suis a : %d\n",a);
	printf("je suis b : %d\n",b);
	return 0;
}*/
