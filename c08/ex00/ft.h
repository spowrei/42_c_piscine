#ifndef FT_H
#define FT_H

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void ft_putstr(char *str)
{
	int index =0;
	while (*(str+index)!='\0')
	{
		write (1,(str+index),1);
		index++;
	}
}

int ft_strlen(char *str)
{
	int lenght =0;

	while (str[lenght]!='\0')
	{
		lenght++;
	}

	return (lenght);
}

int ft_strcmp(char *s1, char *s2)
{
	int index =0;

	while (*(s1 + index) != '\0' && *(s2 + index) != '\0')
	{
		if	(*(s1 + index) != *(s2 + index))
		{
			break;
		}
		index++;
	}
	return (*(s1 + index) - *(s2 + index));
}

#endif // FT_H