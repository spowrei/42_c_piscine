#include <unistd.h> 
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int index =0;
	int index2 =0;
	char *return_pointer = NULL;

	while (*(str + index2)!= '\0')
	{
		if (*(str + index2) == *(str + index2))

		index2++;
	}

	return (return_pointer);
}

int main(void)
{
	char isim[50]= "Mustafa";
	char soyisim[50]= "taf";

	if(ft_strstr(isim,soyisim) == NULL)
	{
	printf("içermez");
	}

	else 
	{
		printf("içerir");
	}
    return (0);
}
