#include <unistd.h>
#include <stdio.h> 

int ft_strlen(char *str)
{
	int lenght =0;

	while (str[lenght]!='\0')
	{
		lenght++;
	}

	return (lenght);
}

int main(void)
{
	printf("%d",ft_strlen("1234567891234567890"));

    return (0);
}
