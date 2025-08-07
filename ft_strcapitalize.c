#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str [i] <= 'Z'))
		{
			if (cap && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			if (!cap && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			cap = 0;
		}
		else
			cap = 1;
		i++;
	}
	return (str)
}
