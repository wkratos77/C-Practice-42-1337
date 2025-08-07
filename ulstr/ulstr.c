#include <unistd.h>

int main(int ac, char **ag)
{
	int	i;
	char	c;

	if (ac == 2)
	{
		i = 0;
		while (ag[1][i])
		{
			if (ag[1][i] >= 'a' && ag[1][i] <= 'z')
			{
				c = ag[1][i] - 32;
				write (1, &c, 1);
			}
			else if (ag[1][i] >= 'A' && ag[1][i] <= 'Z')
			{
				c = ag[1][i] + 32;
				write (1, &c, 1);
			}
			else
				write (1, &ag[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
