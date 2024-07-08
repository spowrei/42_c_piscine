#include <unistd.h> //s1-s2
#include <stdio.h>

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

int main(void)
{
	printf("%d",ft_strcmp("abc","ab"));
    return (0);
}
