#include <unistd.h>

void zigzag(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (i % 2 == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else if (i % 2 != 0 && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		write (1, &str[i], 1);
		i++;
	}
	if (!str)
		return;
}
	
