#include <unistd.h>

int	main(int ac, char **ag)
{
	int	i;
	int	j;

	if (ac > 1)
	{
		j = 1;
		while (ag[j])
		{
			i = 0;
			while (ag[j][i])
			{
				 if (ag[j][i] >= 'A' && ag[j][i] <= 'Z')
                                 {
                                        ag[j][i] = ag[j][i] + 32;
				 }
				 i++;
			}
			j++;
		}
		j = 1;
		while (ag[j])
		{
			i = 0;
			while (ag[j][i])
			{
				if (ag[j][i] >= 'a' && ag[j][i] <= 'z'
					       && (ag[j][i + 1] == '\t' || ag[j][i + 1] == ' ' || ag[j][i + 1] == '\0'))
				{
					ag[j][i] = ag[j][i] - 32;
					write(1, &ag[j][i], 1);
				}
				else
					write (1,&ag[j][i], 1);
				i++;
			}
			write (1, "\n", 1);
			j++;
		}
	}
	else
		write (1, "\n", 1);
}
