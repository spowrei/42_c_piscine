#include <unistd.h> 
#include <stdio.h>

char *ft_strupcase(char *str)
{
	int index =0;
	while (*(str+index)!='\0')
	{
		if(*(str+index)>='a' && *(str+index)<='z')
		{
			*(str+index)-=32;
		}
		index ++;
	}

	return	(str);
}

int main(void)
{
	char isim[] = "mustafa"; // char *isim olarak kullandığımda hata verdi sebebini öğren
	printf("___%s",ft_strupcase(isim));
    return (0);
}
