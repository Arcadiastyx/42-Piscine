/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:31:16 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/26 20:45:57 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.>

int ft_write_nbr_l1(char *str);
int ft_write_nbr_l2(char *str);
int ft_write_nbr_l3(char *str);
int ft_write_nbr(char *str);
int ft_write_nbr_tu_begin(char *c);
int ft_write_nbr_tu(char *c);
int ft_write_nbr_htu000(char *str);
int ft_write_nbr_htu(char *str);
int ft_level(char *str);
int ft_write_nbr_lsup_01(char *str, int level);
int ft_write_nbr_lsup_02(char *str, int level);
int ft_write_nbr_lsup_03(char *str, int level);
int ft_write_nbr_lsup_04(char *str, int level, int index);
void	ft_write_nbr_lsup_master(char *str, int lev, int ind);
int ft_write_nbr_u(char c);
int ft_write_nbr_tu_begin_child(char *c);
int ft_write_nbr_tu_end(char *c);
int ft_write_ten_power(int level);
int ft_strlen(char *str);


int	main(int argc, char **argv)
{
	if ((ft_check_argc(argc) == 0))
		return (0);
	ft_write_nbr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
