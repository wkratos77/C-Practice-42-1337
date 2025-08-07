#include <unistd.h>

int	main(int ac, char **ag)
{
	int	i;
	int	j;

	if (ac == 2)
	{
		i = 0;
		while (ag[1][i] == '\t' || ag[1][i] == ' ')
			i++;
		while (ag[1][i])
		{
			while (ag[1][i] && ag[1][i] != '\t' && ag[1][i] != ' ')
			{
				write (1, &ag[1][i], 1);
				i++;
			}
			while (ag[1][i] == '\t' || ag[1][i] == ' ')
				i++;
			if (ag[1][i])
				write(1, "   ", 3);				
		}
	}
	write (1, "\n", 1);
}
