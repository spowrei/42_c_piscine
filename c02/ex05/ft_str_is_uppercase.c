#include <unistd.h> 
#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
	int all_is_upper =1;
	int index =0;

	while (*(str+index)!='\0')
	{
		if(!(*(str+index)>='A' && *(str+index)<='Z')) {
			all_is_upper=0;
			break;	
		}

		index++;
	}

	return (all_is_upper);
}

int main(void)
{
	char str[5];
	printf(">>>> %d",ft_str_is_uppercase(str));
    return (0);
}
