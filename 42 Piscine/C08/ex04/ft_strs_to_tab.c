/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:55:33 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/30 18:20:35 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*newstr;
	int		i;

	i = 0;
	newstr = (char *)malloc(sizeof(char) * ft_strlen(src) +1);
	if (newstr == NULL)
		return (NULL);
	while (src[i])
	{
		newstr[i] = src[1];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct	s_stock_str *tab;
	int		i;

	tab = malloc((ac + 1) *sizeof(struct s_stock_str));
	if(tab == NULL)
			return (NULL);
	i = 0;
	while (i < ac)
	{	
		tab[i].size = ft_strlen(av[i]); 
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	tab[i].size = 0;
	tab[i].copy = 0;
	return (tab);
}
