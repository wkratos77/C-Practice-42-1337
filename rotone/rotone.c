#include <unistd.h>

int main (int ac, char **ag)
{
	int	i;
	char	r;

	i = 0;
	if (ac == 2)
	{
		while (ag[1][i])
		{
			if ((ag[1][i] >= 'a' && ag[1][i] <= 'y') || (ag[1][i] >= 'A' && ag[1][i] <= 'Y'))
			{
				r = ag[1][i] + 1;
				write (1, &r, 1);
			}
			else if (ag[1][i] == 'z')
				write (1, "a", 1);
			else if (ag[1][i] == 'Z')
				write (1, "A", 1);
			else 
				write(1, &ag[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
