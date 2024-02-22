/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grille.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 10:18:42 by lsohler           #+#    #+#             */
/*   Updated: 2022/06/19 12:48:26 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str);
void	ft_putchar(char c);

void	ft_border(int **tab, char *str) // malloc et av[1]
{
	int	itab;
	int	istr;

	itab = 1;// evite la premier case pour commencer a la case 1
	istr = 0; //argument
	while (istr < 31)
	{
		if (istr < 7)
			tab[0][itab] = str[istr];// ligne du haut
		else if (istr < 15)
			tab[5][itab] = str[istr];// ligne du bas
		else if (istr < 23)
			tab[itab][0] = str[istr]; // colone de gauche
		else if (istr < 31)
			tab[itab][5] = str[istr];// colone de droite
		itab++;
		if (itab == 5) //si tu est a la case 5 alors reviens a la case 1
			itab = 1;
		istr += 2;// permet de sauter les espaces
	}
}

int	**ft_malloc(void)
{
	int	i;
	int	**tab;

	tab = malloc(6 * sizeof(int *));// allocation de memoire pour notre premier tableau
	if (!tab)
		return (NULL);// verification si la memoire a bien ete allouer
	i = 0;
	while (i < 6) // tant que i (0) est inferieur a 6 alors
	{
		tab[i] = malloc(6 * sizeof(int )); // ecrit le tableau du tableau qui est memoire
		if (!tab)
			return (NULL); // verification d-allouage de memoire
		i++;
	}
	i = 0;
	while (i < 36)
	{
		tab[i / 6][i % 6] = '0';// permet de se balader dans le tableau "/" = pour rester sur la ligne % = changer de colone
		i++;
	}
	return (tab); // return notre tableau
}

void	ft_grille(int **tab)
{
	int	i;

	i = 0;
	while (i < 36)
	{
		ft_putchar(tab[i / 6][i % 6]); // permet l-affichage de notre tableau
		if ((i + 1) % 6 == 0) // i+1 ( \0)+ fin du tableau == si fin du tableau reviens a la ligne
		{
			ft_putchar('\n');
		}
		else
			ft_putchar(' '); // si autre met un espace
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	**tab;

	tab = ft_malloc();// appel de malloc avec nos tableau
	i = 0;
	if (argc != 2)// si le nombre d-argument depasse les 2 argument alors renvoie 0
		return (0);
	if (ft_strlen(argv[1]) != 31) // si la taille de notre argument 1 n-est pas equivalent a 31 ( totaliter de notre argument)
		return (-1); // si ce n-est pas le cas alors return -1
	ft_border(tab, argv[1]);// appel de border pour prendre nos arguments av[1][i]
	ft_grille(tab); // appel de notre grille pour l-afficher
	while (i < 6) // tan que notre ligne est infrieur a 6 alors
		free(tab[i++]); //libere l-espace de notre tableau 1
	free(tab); //libere l-espace de notre tablea 2
}
