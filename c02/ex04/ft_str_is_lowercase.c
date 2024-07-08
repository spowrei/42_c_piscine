#include <unistd.h> 
#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int all_is_lower =1;
	int index =0;

	while (*(str+index)!='\0')
	{
		if(!(*(str+index)>='a' && *(str+index)<='z')) {
			all_is_lower=0;
			break;	
		}

		index++;
	}

	return (all_is_lower);
}

int main(void)
{
	printf(">>>> %d",ft_str_is_lowercase("azAZ."));
    return (0);
}
