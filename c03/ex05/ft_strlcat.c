// #include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// size yeterli ise döndürülen değer:		strlen(dest) + strlen(src)		||	
// size yeterli değilse, döndürülen değer:	size + strlen(src)				||	
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;
	unsigned int	j;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	i = 0;
	j = d_len;
	
	if (size <= d_len)
		return (s_len + size);
	while (src [i] != '\0' && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (d_len + s_len);
}

int main()
{
	char src[50] = "Mustafa013456789";
	printf("%d", ft_strlcat(src, " Kaplan", 50));
	printf("\n%s", src);
	return 0;
}