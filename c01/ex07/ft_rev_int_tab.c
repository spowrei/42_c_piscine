/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:27:42 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/14 19:52:49 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	index;

	index = size - 1;
	while (index >= size / 2)
	{
		temp = *(tab + index);
		*(tab + index) = *(tab + size - index - 1);
		*(tab + size - index - 1) = temp;
		index--;
	}
}
