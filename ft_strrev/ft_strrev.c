#include <unistd.h>
#include <stdio.h>
char    *ft_strrev(char *str)
{
	int	i;
	int	j;
	char	c;

	j = 0;
	while (str[j])
	{
		j++;
	}
	i = 0;
	while (i < j)
	{
		c = str[j - 1];
		str[j - 1] = str[i];
		str[i] = c;
		i++;
		j--;
	}
	return str;
}

int main()
{
	char s[] = "hello";
	printf("%s",ft_strrev(s));
}
