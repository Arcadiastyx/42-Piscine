/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:51:25 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/27 08:40:13 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <unistd.h>
#include <stdlib.h>

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

char	*ft_strdup( char *src)
{
	char	*newstr;
	int		i;

	i = 0;
	newstr = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (newstr == NULL)
		return (NULL);
	while (src[i])
	{
		newstr[i] = src[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*int main (int ac, char **av) 
{ 
	char *newstr; 

	if (ac == 2) 
{ 

	newstr = ft_strdup(av[1]);
	printf("%s\n",newstr); 	 
}
}*/
