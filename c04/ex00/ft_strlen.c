#include <stdio.h>

int	ft_strlen(char *str)
{
	int index;

	index = 0;
	if (str == NULL) 
	{
		return (index);
	}
	while (*(str + index) != '\0')
	{
		index++;
	}
	return (index);
}

int main()
{
	printf("%d",ft_strlen("0123456789"));
	return 0;
}