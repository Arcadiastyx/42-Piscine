/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 20:27:30 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/13 15:23:41 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	if (!dest[i])
		while (src[j] && j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
/*int main()
{
	char *tab;

	char dest[20] = "1234";
	char src[20] = "5678";

	tab = ft_strncat(dest,src,2);
	printf("%s\n",tab);
	return 0;
}*/
