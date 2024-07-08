#include <unistd.h> 
#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int index =0;
	while (*(str+index)!='\0')
	{
		if(*(str+index)>='A' && *(str+index)<='Z')
		{
			*(str+index)+=32;
		}
		index ++;
	}

	return	(str);
}

int main(void)
{
	char isim[] = "MustAFAA"; 
	printf("___%s",ft_strlowcase(isim));
    return (0);
}
