/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:06:06 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/14 10:42:55 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_the_number(char h, char t, char u)
{
	write(1, &h, 1);
	write(1, &t, 1);
	write(1, &u, 1);
	if (!(h == '7' && t == '8' && u == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	units;
	char	tens;
	char	hundreds;

	units = '0';
	tens = '0';
	hundreds = '0';
	while (hundreds <= '9')
	{
		while (tens <= '9')
		{
			while (units <= '9')
			{
				if (units > tens && tens > hundreds)
				{
					write_the_number(hundreds, tens, units);
				}
				units++;
			}
			units = 0;
			tens ++ ;
		}
		tens = 0;
		hundreds++;
	}
}
