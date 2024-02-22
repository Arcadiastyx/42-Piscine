/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkapreli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:16:07 by lkapreli          #+#    #+#             */
/*   Updated: 2022/06/26 13:19:25 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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
        write(1, "Error \n ", 7);
        return (0);
    }
    if (argc == 3)
    {
        // bonus suppl. dico fr, it, es...
        write(1, "Bonus case. Not handeled yet. Error \n", 38);
        return (0);
    }
    if (argc == 2)
        return (1);
    if (argc == 1)
    {
        // bonus. Use read
        // pas un bonus si dico en anglais
        write(1, "Bonus case. Not handled yet. Error \n", 37);
        return (0);
    }
    return(1);
}

int	ft_write_nbr_u(char c)
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
	return (0);
}

int ft_write_nbr_tu_begin_child(char *c)
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
    	else if (c[1] == '9')
        	write(1, "nineteen", ft_strlen("nineteen"));
  		return (0);
	}
	return (1);
 }

int ft_write_nbr_tu_begin(char *c)
{
	int flag_return;

	if (c[0] == '0')
	{
		ft_write_nbr_u(c[1]);
		return (0);
	}
	return (1);
}

int ft_write_nbr_tu_end(char *c)
{
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
		ft_write_nbr_u(c[1]);
	}
	return (0);
}

int	ft_write_nbr_tu(char *c)
{
	int flag_return;

	flag_return = ft_write_nbr_tu_begin(c);
	if (flag_return == 0)
		return (0);
	flag_return = ft_write_nbr_tu_begin_child(c);	
	if (flag_return == 0)
		return (flag_return);
	ft_write_nbr_tu_end(c);
	return (0);
}

int ft_write_nbr_htu000(char *str)
{
	if ((str[0] == '0') && (str[1] == '0') && (str[2] == '0'))
		return (1);
	return (0);
}

int	ft_write_nbr_htu(char *str)
{
	char	tenthunits[2];

	if ((str[0] == '0') && (str[1] == '0'))
		ft_write_nbr_u(str[2]);
	else if (str[0] == '0')
	{
		tenthunits[0] = str[1];
		tenthunits[1] = str[2];
		ft_write_nbr_tu(tenthunits);
	}
	else
	{
		ft_write_nbr_u(str[0]);
		write(1, " ", 1);
		write(1, "hundred", ft_strlen("hundred"));
		if ((str[1] != '0') || (str[2] != '0'))
		{
			tenthunits[0] = str[1];
			tenthunits[1] = str[2];
			write(1, " ", 1);
			ft_write_nbr_tu(tenthunits);
		}
	}
	return (0);
}

int	ft_level(char *str)
{
	int	length;

	length = ft_strlen(str);
	if (length <= 3)
		return (0);
	else
	{
		length = (length - 1) / 3;
		return (length);
	}
}

int	ft_write_ten_power(int level)
{
	if (level == 1)
		write(1, "thousand", ft_strlen("thousand"));
	if (level == 2)
		write(1, "million", ft_strlen("million"));
	if (level == 3)
		write(1, "billion", ft_strlen("billion"));
	if (level == 4)
		write(1, "trillion", ft_strlen("trillion"));
	if (level == 5)
		write(1, "quadrillion", ft_strlen("quadrillion"));
	if (level == 6)
		write(1, "quintillion", ft_strlen("quintillion"));
	if (level == 7)
		write(1, "sextillion", ft_strlen("sextillion"));
	if (level == 8)
		write(1, "septillion", ft_strlen("septillion"));
	if (level == 9)
		write(1, "octillion", ft_strlen("octillion"));
	if (level == 10)
		write(1, "nonillion", ft_strlen("nonillion"));
	if (level == 11)
		write(1, "decillion", ft_strlen("decillion"));
	if (level == 12)
		write(1, "undecillion", ft_strlen("undecillion"));
	return (0);
}

int ft_write_nbr_l1(char * str)
{
	int length;

	length = ft_strlen(str);
	if (length == 1)
	{
		if (str[0] != '0')
			ft_write_nbr_u(str[0]);
		else
			write(1, "zero", 5);
		return (0);
	}
	return (1);
}

int ft_write_nbr_l2(char * str)
{
	int 	length;
	char	tenthunits[2];

	length = ft_strlen(str);
	if (length == 2)
	{
		tenthunits[0] = str[0];
		tenthunits[1] = str[1];
		ft_write_nbr_tu(tenthunits);
		return (0);
	}
	return (1);
}

int ft_write_nbr_l3(char *str)
{
	int 	length;
	char	hundredtenthunits[3];

	length = ft_strlen(str);
	if (length == 3)
	{
		hundredtenthunits[0] = str[0];
		hundredtenthunits[1] = str[1];
		hundredtenthunits[2] = str[2];
		if (ft_write_nbr_htu000(hundredtenthunits) == 1)
			return(0);
		ft_write_nbr_htu(hundredtenthunits);
		return (0);
	}
	return (1);
}

int ft_write_nbr_lsup_01(char *str, int level)
{
	char	hundredtenthunits[3];
	int		flag_print_level;
	int		flag_000;
	
	hundredtenthunits[0] = str[0];
	hundredtenthunits[1] = str[1];
	hundredtenthunits[2] = str[2];
	flag_print_level = ft_write_nbr_htu(hundredtenthunits);
	flag_000 = ft_write_nbr_htu000(hundredtenthunits);
	if (flag_print_level == 0 && flag_000 == 0)
	{
		write(1, " ", 1);
		ft_write_ten_power(level);
	}
	return (0);
}

int ft_write_nbr_lsup_02(char *str, int level)
{
	char	tenthunits[2];
	int		flag_print_level;
	
	tenthunits[0] = str[0];
	tenthunits[1] = str[1];
	flag_print_level = ft_write_nbr_tu(tenthunits);
	if (flag_print_level == 0)
	{
		write(1, " ", 1);
		ft_write_ten_power(level);
	}
	return (0);
}

int ft_write_nbr_lsup_03(char *str, int level)
{
	char	tenthunits[2];
	int		flag_print_level;
	
	flag_print_level = ft_write_nbr_u(str[0]);
	if (flag_print_level == 0)
	{
		write(1, " ", 1);
		ft_write_ten_power(level);
	}
	return (0);
}

int	ft_write_nbr_lsup_04(char *str, int level, int index)
{
	char 	hundredtenthunits[3];
	int		flag_print_level;
	int		flag_000;

	hundredtenthunits[0] = str[index];
	hundredtenthunits[1] = str[index + 1];
	hundredtenthunits[2] = str[index + 2];
	if ((hundredtenthunits[0] != 0) || (hundredtenthunits[1] != 0) || (hundredtenthunits[2] != 0))
	{
		write(1, " ", 1);
		flag_print_level = ft_write_nbr_htu(hundredtenthunits);
		flag_000 = ft_write_nbr_htu000(hundredtenthunits);
		if (flag_print_level == 0 && flag_000 == 0)
		{
			write(1, " ", 1);
			ft_write_ten_power(level);
		}
	}
	return (0);
}

void	ft_write_nbr_lsup_master(char *str, int lev, int ind)
{
		if (ft_strlen(str) % 3 == 0)
		{
			ft_write_nbr_lsup_01(str, lev);
			ind = 3;
		}
		if (ft_strlen(str) % 3 == 2)
		{
			ft_write_nbr_lsup_02(str, lev);
			ind = 2;
		}
		if (ft_strlen(str) % 3 == 1)
		{
			ft_write_nbr_lsup_03(str, lev);
			ind = 1;
		}
		lev--;
		while (lev >= 0)
		{
			ft_write_nbr_lsup_04(str, lev, ind);
			lev--;
			ind += 3;
		}
}

int	ft_write_nbr(char *str)
{
	int		length;
	int		level;
	int		index;
	
	length = ft_strlen(str);
	if ((ft_write_nbr_l1(str)) == 0)
		return (0);
	if ((ft_write_nbr_l2(str)) == 0)
		return (0);
	if ((ft_write_nbr_l3(str)) == 0)
		return (0);
	if (length  > 3)
		ft_write_nbr_lsup_master(str, ft_level(str), 0);
	return (0);
}

int	main(int argc, char **argv)
{
	if ((ft_check_argc(argc) == 0))
		return (0);
	ft_write_nbr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
