// #include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int ix;
	int ix2;

	ix = 0;
	ix2 = 0;
	while (*(dest + ix) != '\0')
	{
		ix++;
	}
	while (ix + ix2 < size - 1 && *(src + ix2) != '\0')
	{
		*(dest + ix + ix2) = *(src + ix2);
		ix2++;
	}
	*(dest + ix + ix2) = '\0';

	return (ix + ix2);
}

int main()
{
	char src[50] = "Mustafa013456789";
	printf("%d", ft_strlcat(src, " Kaplan", 50));
	printf("\n%s", src);
	return 0;
}