#include <stdio.h>
#include <stdlib.h>

void ft_strcat(char *dest, char *src)
{
	int index;
	int index2;

	index = 0;
	index2 = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	while (src[index2] != '\0')
	{
		dest[index + index2] = src[index2];
		index2++;
	}
	dest[index + index2] = '\0';
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *output_str;
	int index;

	output_str = (char *)malloc(size);
	*output_str = '\0';

	index = 0;
	while (*(strs + index) != NULL)
	{
		ft_strcat(output_str, *(strs + index));
		index++;
		if (*(strs + index) != NULL)
			ft_strcat(output_str, sep);
	}


	return (output_str);
}

int main()
{
	char *yazi[10] = {"Mustafa", "Kaplan", "Brrr"};
	char *p;

	p = ft_strjoin(100, yazi, "-");

	printf("%s",p);
	
	free(p);
	return 0;
}