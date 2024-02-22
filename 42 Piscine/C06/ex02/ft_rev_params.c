/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:26:27 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/19 09:56:30 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = ac -1;
	while (j > 0)
	{
		i = 0;
		while (av[j][i] != '\0')
		{
			ft_putchar(av[j][i]);
			i++;
		}
		ft_putchar('\n');
		j--;
	}
	return (0);
}
