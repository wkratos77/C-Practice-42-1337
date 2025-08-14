#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;

	j = 0;
	while (dest[j])
	{
		j++;
	}
	l = 0;
	while (src[l])
	{
		l++;
	}
	if (j >= size)
	{
		return (size + l);
	}
	i = 0;
	while (src[i] && i + j < size -1)
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (i + j);
}
int main()
{
	char d[20] = "Hello ";
	char s[] = "World";
	printf("%u\n", ft_strlcat(d, s, 20));
}
