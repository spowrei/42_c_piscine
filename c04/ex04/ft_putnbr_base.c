/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:41:06 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/22 17:05:49 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_base_is_okay(char *base)
{
	int	index;
	int	index2;

	if (ft_strlen(base) < 2)
		return (0);
	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] <= 32 || base[index] == 127
			|| base[index] == '+' || base[index] == '-')
			return (0);
		index2 = index + 1;
		while (base[index2] != '\0')
		{
			if (base[index] == base[index2])
				return (0);
			index2++;
		}
		index++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_max;
	long int	nb;

	if (ft_base_is_okay(base) == 0)
		return ;
	base_max = ft_strlen(base);
	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < base_max)
		ft_putchar(base[nb]);
	else
	{
		ft_putnbr_base(nb / base_max, base);
		ft_putnbr_base(nb % base_max, base);
	}
}
