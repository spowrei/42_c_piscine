#include <unistd.h> 
#include <stdio.h>

int is_low(char c)
{
	int is_lower =0;
	
	if (c>='a' && c<='z')
	{
		is_lower=1;
	}

	return (is_lower);
}

int is_up(char c)
{
	int is_upper =0;
	
	if (c>='A' && c<='Z')
	{
		is_upper =1;
	}

	return (is_upper );
}

int is_num(char c)
{
	int is_numeric =0;
	
	if (c>='0' && c<='9')
	{
		is_numeric=1;
	}

	return (is_numeric);
}

char *ft_strcapitalize(char *str)
{
	int index = 0;

	while (*(str+index)!='\0')
	{
		if (index ==0 && is_low(*(str+index))==1)
		{
			*(str+index) -= 32;
		}

		else if(is_num(*(str+index))==0 && is_up(*(str+index))==0)
		{
			if(is_low(*(str+index))==0 && is_low(*(str+index+1))==1)
			{
				*(str+index+1) -= 32;
			}
		}
		index ++;
	}

	return	(str);
}

int main(void)
{
	char isim[] = "salut, comment tu vas ? 42mo)ts qua!rante-deux; cin.quante+et+un";
	printf(">> %s",ft_strcapitalize(isim));
    return (0);
}
