#include <unistd.h>

int main (int ac, char **ag)
{	
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (ag[1][i])
		{	
			if (i % 3 == 0 && i % 5 == 0)
				ag[1][i] = '5';
			else if (i % 3 == 0)
				ag[1][i] = '5';
			else if (i % 5 == 0)
				ag[1][i] = '3';
			write(1, &ag[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
