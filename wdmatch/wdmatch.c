#include <unistd.h>

int	main(int ac, char **ag)
{
	int	i;
	int	j;
	int	l;
	char	str[100];

	if (ac == 3)
	{
		i = 0;
		j = 0;
		l = 0;
		while(ag[1][i] && ag[2][j])
		{
			if(ag[1][i] == ag[2][j])
			{
				str[l] = ag[1][i];
				l++;
				i++;
			}
			j++;
		}
		str[l] = '\0';
		if (ag[1][i] == '\0')
		{
			l = 0;
			while(str[l])
			{
				write(1, &str[l], 1);
				l++;
			}
		}
	}
	write (1, "\n", 1);
}
