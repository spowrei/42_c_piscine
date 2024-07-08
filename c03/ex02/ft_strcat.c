#include <unistd.h> //s1-s2
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	int index = 0;
	int index2 =0;

	while(*(dest+index)!='\0')
	{
		index++;
	}

	while(*(src+index2)!='\0')
	{
		*(dest+index) = *(src+index2);

		index++;
		index2++;
	}
	*(dest+index) = '\0';

	return (dest);
}

int main(void)
{
	char isim[50]="Mustafa ";
	char soyisim[10]="Kaplan";

	ft_strcat(isim,soyisim);

	printf("%s", isim);

    return (0);
}
