#include <unistd.h>

int	main(int ac, char **ag)
{
	int	i;
	int	r;
	int	j;

	if (ac == 2)
	{
		i = 0;
		r = 0;
		while (ag[1][i])
		{
			if (ag[1][i] >= 'a' && ag[1][i] <= 'z')
			{
				r = ag[1][i] - 'a' + 1;
				j = 0;
				while (j < r)
				{
					write(1, &ag[1][i], 1);
					j++;
				}
			}
			else if (ag[1][i] >= 'A' && ag[1][i] <= 'Z')
			{
				r = ag[1][i] - 'A' + 1;
				j = 0;
				while (j < r)
				{
					write(1, &ag[1][i], 1);
					j++;
				}
			}
			else
				write(1, &ag[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
