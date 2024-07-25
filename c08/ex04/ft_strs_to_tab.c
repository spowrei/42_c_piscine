/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:07:33 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/25 13:58:45 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (ptr == NULL)
		return (NULL);
	index = 0;
	while (src[index] != '\0')
	{
		ptr[index] = src[index];
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*t_struct;

	t_struct = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (t_struct == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		t_struct[i].size = ft_strlen(av[i]);
		t_struct[i].str = ft_strdup(av[i]);
		t_struct[i].copy = ft_strdup(av[i]);
		i++;
	}
	t_struct[i].size = 0;
	t_struct[i].str = 0;
	t_struct[i].copy = 0;
	return (t_struct);
}
