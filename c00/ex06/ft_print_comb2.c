/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:26:09 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/14 10:45:21 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_the_number(int n1, int n2)
{
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	c1 = '0' + n1 / 10;
	c2 = '0' + n1 % 10;
	c3 = '0' + n2 / 10;
	c4 = '0' + n2 % 10;
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, " ", 1);
	write(1, &c3, 1);
	write(1, &c4, 1);
	if (!(n1 == 98 && n2 == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 1;
	while (n1 < 99)
	{
		n2 = n1 + 1;
		while (n2 < 100)
		{
			write_the_number(n1, n2);
			n2++;
		}
		n1++;
	}
}
