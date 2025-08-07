#include <unistd.h>

int	main(int ac, char **ag)
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (ag[1][i])
		{
			while (ag[1][i] >= 'A' && ag[1][i] <= 'Z')
			{
				ag[1][i] = ag[1][i] + 32;
				write (1, &ag[1][i], 1);
				if (ag[1][i] == '_')
					break;
				i++;
			}
			if (ag[1][i] == '_')
				i++;
			if (ag[1][i - 1] == '_' && ag[1][i] >= 'a' && ag[1][i] <= 'z')
			{
				ag[1][i] = ag[1][i] - 32;
				write (1, &ag[1][i], 1);
				i++;
			}
			write(1, &ag[1][i], 1);
			i++;
		}
	}
}
