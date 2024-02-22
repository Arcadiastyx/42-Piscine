/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 21:23:28 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/27 21:05:03 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	full_size_malloc(int size, char **strs, char *sep)
{
	int	total_size;
	int	sep_size;
	int	i;

	total_size = 0;
	sep_size = ft_strlen(sep);
	i = 0;
	while (i < size)
		total_size += ft_strlen(strs[i++]) + sep_size;
	total_size -= sep_size;
	return (total_size);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	char	*str;
	int		i;

	if (size == 0)
		return (malloc(sizeof(char)));
	str = malloc((full_size_malloc(size, strs, sep) + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	tab = str;
	i = 0;
	while (i < size)
	{
		ft_strcpy(tab, strs[i]);
		tab += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(tab, sep);
			tab = tab + ft_strlen(sep);
		}
		i++;
	}
	tab[i] = '\0';
	return (str);
}

/*int main( int ac, char **av) 
{ 

	printf("%s",ft_strjoin(ac - 1, &av[1], "/"));

}*/
