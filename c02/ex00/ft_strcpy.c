#include <unistd.h> // strcpy(hedef, kaynak);  // return olarak hedef'in başlangıç indexinin adresini verir

char	*ft_strcpy(char *dest, char *src)
{
	int	index;
	index = 0;

	while (*(src+index)!='\0')
	{
		*(dest+index)=*(src+index);
		index++;
	}
	
	return dest;
}

int main(void)
{
	char *kaynak = "Mustafa";
	char hedef[7]="kaplann";

	ft_strcpy(hedef,kaynak);

	write(1,hedef,7); 
	

	return (0);
}