#include <stdio.h>
#include <stdlib.h>

int ft_is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int space_counter(char *str)
{
	int index;

	index = 0;
	while (*(str + index) != '\0')
	{
		if (*(str + index) == ' ' || *(str + index) == '\t')
			index++;
		else
			break;
	}

	return (index);
}

int ft_atoi(char *str)
{
	int index;
	int number;
	int coefficient;

	coefficient = 1;
	index = space_counter(str);
	while (*(str + index) != '\0')
	{
		if (ft_is_num(*(str + index)) == 1)
		{
			number *= 10;
			number += (*(str + index) - '0');
		}
		else if (*(str + index) == '+')
			;
		else if (*(str + index) == '-')
			coefficient *= -1;
		else
			break;
		index++;
	}
	return (number * coefficient);
}

int main()
{
	char *s = " ---+--+1234ab567";

	printf("\n%d", atoi(s));
	printf("\n%d", ft_atoi(s));

	return 0;
}