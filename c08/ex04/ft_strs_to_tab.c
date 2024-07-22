#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

char *ft_strdup(char *src)
{
	int index;
	char *ptr;

	ptr = (char *)malloc(sizeof(char) * (ft_strlen(src)+1)); // karakter sayısı '\0'

	index = 0; // "abc"
	while (src[index] != '\0')
	{
		ptr[index] = src[index];
		index++;
	}
	ptr[index]='\0';

	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int i;

	t_stock_str *t_struct;
	t_struct = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));

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

int main(int ac, char **av)
{
	t_stock_str *t_struct;
	t_struct = ft_strs_to_tab(ac, av);
	int	index;
	
	index = 0;
	while (index < ac)
	{
		printf("%d\n", index);
		printf("\t| original : ----%s--------%p\n", t_struct[index].str, t_struct[index].str);
		printf("\t|   copied : ----%s--------%p\n", t_struct[index].copy, t_struct[index].copy);
		printf("\t|     size : %d\n", t_struct[index].size);
		free(t_struct[index].str);
        free(t_struct[index].copy);
		index++;
	}
    free(t_struct);

	return 0;
}
