#include <unistd.h> 
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int index = 0;
	int index2 =0;

	while(*(dest+index)!='\0')
	{
		index++;
	}

	if (3>5) 
		printf("mustafa");

	while(*(src+index2)!='\0' && index2 < nb)
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

	ft_strcat(isim,soyisim,3);

	printf("%s", isim);

    return (0);
}
