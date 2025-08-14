#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return str;
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[0])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
			}
			if (to_find[j] == '\0')
				return &str[i];
		}
		i++;
	}
	return NULL;
}
int main()
{
	char str[] = "hello how are you";
	char t[] = "how";
	printf("%s",ft_strstr(str,t));
}
