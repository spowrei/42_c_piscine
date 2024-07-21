#include <unistd.h> 
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int index =0;
	*(dest+size-1)='\0';

	while (*(src+index)!='\0')
	{
		if (index<size-1 )
		{
			*(dest+index) = *(src+index);
		}
		index++;
	}

	dest[size-1] = '\0';

	// strlcpy fonksiyonunun dönüş değeri, kaynak dizinin (src) uzunluğunu döner. Bu, hedef diziye (dest) kaç karakterin kopyalandığından bağımsızdır.
	return (index);
	
}

int main(void)
{
	char *source ="mustafa";
	char destination[10];

	printf("%d",ft_strlcpy(destination,source,5));
	printf("\n%s",destination);

    return (0);
}
