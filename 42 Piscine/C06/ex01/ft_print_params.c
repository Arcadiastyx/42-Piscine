/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:18:02 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/19 09:53:43 by inaranjo         ###   ########.fr       */
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

	j = 1;
	while (j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			ft_putchar(av[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
