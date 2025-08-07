#include <unistd.h>

int	ft_strlen(char *str)
{
	if (str[0] == '\0')
		return 0;
	return (1 + ft_strlen(str + 1));
}

int	main(int ac, char **ag)
{
	int	i;
	int	size;
	int	j;

	if (ac == 2)
	{
		i = 0;
		size = ft_strlen(ag[1]);
		while (ag[1][i])
		{
			j = i + 1;
			if ((ag[1][i] >= 'a' && ag[1][i] <= 'z') || (ag[1][i] >= 'A' && ag[1][i] <= 'Z'))
			{
				write (1, &ag[1][i], 1);
				if (ag[1][j])
					write (1, " ", 1);
			}
			i++;
		}
	}
}
