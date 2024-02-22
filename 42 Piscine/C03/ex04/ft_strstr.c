/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 19:02:42 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/13 09:19:00 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h> 
#include <string.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
				j++;
		}
		i++;
	}
	return (0);
}
/*int main()
{
	char str[] = "abcdeetth";
	char to_find[] = "h";

	printf("made in 42: %s\n", ft_strstr(str,to_find));
	printf("original strstr : %s\n",strstr(str,to_find));
	return 0;
}*/	
