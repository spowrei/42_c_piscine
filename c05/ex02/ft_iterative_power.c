/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:39:25 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/23 15:18:57 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	number;

	if (power < 0)
		return (0);
	number = 1;
	while (power > 0)
	{
		number *= nb;
		power--;
	}
	return (number);
}
