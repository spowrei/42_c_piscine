/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:46:38 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/20 16:49:45 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	ix1;
	int	ix2;
	int	includes;

	ix1 = 0;
	ix2 = 0;
	while (*(str + ix1) != '\0')
	{
		includes = 1;
		while (*(to_find + ix2) != '\0')
		{
			if (*(to_find + ix2) != *(str + ix1 + ix2))
			{
				includes = 0;
				break ;
			}
			ix2++;
		}
		if (includes == 1)
		{
			return (str + ix1);
		}
		ix1++;
	}
	return (0);
}
