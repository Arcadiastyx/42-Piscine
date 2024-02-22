/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brut.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:45:25 by inaranjo          #+#    #+#             */
/*   Updated: 2022/06/25 17:45:43 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

//doublon avec isaac
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int ft_check_argc(int argc)
{
    if (argc > 3)
    {
        write(1, "Error\n", 11);
        return (0);
    }
    if (argc == 3)
    {
        // bonus suppl. dico fr, it, es...
        write(1, "Bonus case. Not handeled yet. Error\n", 11);
        return (0);
    }
    if (argc == 2)
        return (1);
    if (argc == 0)
    {
        // bonus. Use read
        // pas un bonus si dico en anglais
        write(1, "Bonus case. Not handled yet. Error\n", 11);
        return (0);
    }
    return(1);
}
// pas de trait d'union dans l'exemple int ft_write_underscore(char *str)



int ft_write_nbrHTU(char *str)
{
    char    *hundred[10];
    char    *tenth[10];
    char    *units[10];
    char    *tenthunits[10];
    int     j;
    
    j = 0;
    printf("len de argv, test2, %i", ft_strlen(str));
    if (ft_strlen(str) <= 3)
    {
        if ((str[0] == '0') && (str[1] == '0') && (str[2] == '0'))
        {
            printf("que des zeros, rien a ecrire");
        }
        else if ((str[0] == '0') && (str[1] == '0'))
        {
            /*
            passer le dico en parametre et peut-etre l-indice de parcours de argv[1]
            while (dico[j].index != str[2])
            {
                j++;
            }
            write(1, dico[j].string, ft_strlen(dico[j].string));
            return (0);
            */
            if (str[2] == '1')
                write(1, "one", ft_strlen("one"));
            if (str[2] == '2')
                write(1, "two", ft_strlen("two"));
            if (str[2] == '3')
                write(1, "three", ft_strlen("three"));
            if (str[2] == '4')
                write(1, "four", ft_strlen("four"));
            if (str[2] == '5')
                write(1, "five", ft_strlen("five"));
            if (str[2] == '6')
                write(1, "six", ft_strlen("six"));
            if (str[2] == '7')
                write(1, "seven", ft_strlen("seven"));
            if (str[2] == '8')
                write(1, "eight", ft_strlen("eight"));
            if (str[2] == '9')
                write(1, "nine", ft_strlen("nine"));      
        }
        else if (str[0] == 0)
        {
            if (str[1] == 1)
            {
                printf("on recopie le dico\n");
            }
            
        }

    }
    return (0);
}

int ft_write_nbr(char *str)
{
    int length;

    length = ft_strlen(str);
    return (0);
}




int main(int argc, char **argv)
{
    // main de test, fichier chez Matteo
    // declaration variable


    if ((ft_check_argc(argc) == 0))
        return(0);
    printf("test 1 : %s", argv[1]);
    ft_write_nbrHTU(argv[1]);
    return (0);
}
