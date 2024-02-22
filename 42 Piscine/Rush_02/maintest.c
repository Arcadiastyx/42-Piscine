/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:29:42 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/25 14:17:09 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <unistd.h>

char	*ft_atoi(char *str);

int main (int ac, char **av) 
{ 
	(void) ac;	
	
	printf("%s\n",ft_atoi(av[1]));
	return (0);
} 
