//#include <unistd.h> 
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	ix1;
	int	ix2;
	int	includes;

	ix1 = 0;
	ix2 = 0;
	while (*(str+ix1) != '\0')
	{
		includes =1;
		while (*(to_find+ix2)!='\0')
		{
			if (*(to_find+ix2) != *(str+ix1+ix2))
			{
				includes = 0;
				break;
			}
			ix2++;
		}
		if (includes==1)
		{
			return (str+ix1);
		}
		ix1++;
	}
	return (NULL);
}

int main(void)
{
	char isim[50]= "Mustafa";
	char soyisim[50]= "tafaka";

	if(ft_strstr(isim,soyisim) == NULL)
	{
	printf("icermez");
	}

	else 
	{
		printf("icerir");
	}
    return (0);
}
