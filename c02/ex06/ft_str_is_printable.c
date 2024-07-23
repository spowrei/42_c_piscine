/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:08:05 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/15 13:08:24 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	all_is_printable;
	int	index;

	all_is_printable = 1;
	index = 0;
	while (*(str + index) != '\0')
	{
		if (!(*(str + index) >= 32 && *(str + index) <= 126))
		{
			all_is_printable = 0;
			break ;
		}
		index++;
	}
	return (all_is_printable);
}

// ASCII tablosunda printable karakterler 32 ile 126 arasındaki kodlara sahiptir
// 32 öncesi ESC, Tab benzeri kontrol karakterleri var
// 126 sonrası şapkalı A gibi özel aksanlı harfler var