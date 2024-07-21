/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:36:49 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/20 20:36:51 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int number;
	
	number = 1;

	if (nb < 0)
	{
		return (0);
	}
	

	while (nb>1)
	{
		number*=nb;
	
		nb--;
	}

	return (number);
}
