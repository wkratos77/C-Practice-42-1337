#include <unistd.h>

int	main()
{
	int	i;
	char	c;

	i = 0;
	while (i < 10)
	{
		if (i % 2 == 0)
		{
			c = i + '0';
			write (1, &c, 1);
		}
		write (1, "\t", 1);
		i++;
	}
	write (1, "10", 2);
}
