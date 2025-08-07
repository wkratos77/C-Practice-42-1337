#include <unistd.h>

int	main(int ac, char **ag)
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (ag[1][i])
			i++;
		i--;
		while (i >= 0)
		{
			write (1, &ag[1][i], 1);
			i--;
		}
	}
	write (1, "\n", 1);
}
