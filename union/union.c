#include <unistd.h>

int	seen(char *str, int idx, char c)
{
	int	i;

	i = 0;
	while (i < idx)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	is_in (char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **ag)
{
	int	i;

	if (ac == 3)
	{
		i = 0;
		while (ag[1][i])
		{
			if (!seen(ag[1], i, ag[1][i]))
				write (1, &ag[1][i], 1);
			i++;
		}
		i = 0;
		while (ag[2][i])
		{
			if (!(seen(ag[2], i, ag[2][i]) || is_in(ag[1], ag[2][i])))
				write (1, &ag[2][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
