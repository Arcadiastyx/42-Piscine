/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkapreli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:16:07 by lkapreli          #+#    #+#             */
/*   Updated: 2022/06/25 21:10:01 by inaranjo         ###   ########.fr       */
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

int ft_write_nbrU(char c)
{
    if (c == '1')
        write(1, "one", ft_strlen("one"));
    if (c == '2')
        write(1, "two", ft_strlen("two"));
    if (c == '3')
        write(1, "three", ft_strlen("three"));
    if (c == '4')
        write(1, "four", ft_strlen("four"));
    if (c == '5')
        write(1, "five", ft_strlen("five"));
    if (c == '6')
        write(1, "six", ft_strlen("six"));
    if (c == '7')
        write(1, "seven", ft_strlen("seven"));
    if (c == '8')
        write(1, "eight", ft_strlen("eight"));
    if (c == '9')
        write(1, "nine", ft_strlen("nine"));  
    return(0);
}

int ft_write_nbrTU(char c[2])
{
    if (c[0] == '1')
    {
        if (c[1] == '0')
            write(1, "ten", ft_strlen("ten"));
        else if (c[1] == '1')
            write(1, "eleven", ft_strlen("eleven"));
        else if (c[1] == '2')
            write(1, "twelve", ft_strlen("twelve"));   
        else if (c[1] == '3')
            write(1, "thirteen", ft_strlen("thirteen"));
        else if (c[1] == '4')
            write(1, "fourteen", ft_strlen("fourteen"));
        else if (c[1] == '5')
            write(1, "fifteen", ft_strlen("fifteen"));
        else if (c[1] == '6')
            write(1, "sixteen", ft_strlen("sixteen"));   
        else if (c[1] == '7')
            write(1, "seventeen", ft_strlen("seventeen"));
        else if (c[1] == '8')
            write(1, "eighteen", ft_strlen("eighteen"));   
        else if (c[1] =='9')
            write(1, "nineteen", ft_strlen("nineteen"));    
        return (0);
    }
    if (c[0] == '2')
        write(1, "twenty", ft_strlen("twenty"));
    else if (c[0] == '3')
        write(1, "thirty", ft_strlen("thirty"));
    else if (c[0] == '4')
        write(1, "fourty", ft_strlen("fourty"));
    else if (c[0] == '5')
        write(1, "fifty", ft_strlen("fifty"));
    else if (c[0] == '6')
        write(1, "sixty", ft_strlen("sixty"));
    else if (c[0] == '7')
        write(1, "seventy", ft_strlen("seventy"));
    else if (c[0] == '8')
        write(1, "eighty", ft_strlen("eighty"));
   else if (c[0] == '9')
        write(1, "ninety", ft_strlen("ninety"));
     if (c[0] != '1')
    {
        write(1, " ", 1);
        ft_write_nbrU(c[1]);
    }
    return (0);
	
}

int ft_write_nbrHTU(char *str)
{
    char    tenthunits[2];
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
           ft_write_nbrU(str[2]);   
        }
      /*  if (str[0] == 0)
        {
            tenthunits[0] = str[1];
            tenthunits[1] = str[2];
            printf("test 3 befor4 nbrTU, %c %c \n", tenthunits[0], tenthunits[1]);
            printf("test 3 befor4 nbrTU, %c %c \n", str[1], str[2]);
            ft_write_nbrTU(tenthunits);
        }
        */
        tenthunits[0] = str[1];
        tenthunits[1] = str[2];
        printf("test 3 befor4 nbrTU, %c %c \n", tenthunits[0], tenthunits[1]);
        printf("test 3 befor4 nbrTU, %c %c \n", str[1], str[2]);
        ft_write_nbrTU(tenthunits);
    }
    write(1, "\n", 1);
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
    printf("test 1 : %s\n", argv[1]);
    ft_write_nbrHTU(argv[1]);
    return (0);
}
