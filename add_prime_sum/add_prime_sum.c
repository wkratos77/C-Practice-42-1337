#include <unistd.h>

int	prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	putnb(int nb)
{
	if (nb > 9)
	{
		putnb(nb / 10);
		putnb(nb % 10);
	}
	else
		write (1, &"0123456789" [nb], 1);
}

int	main(int ac, char **ag)
{
	int	i;
	int	j;
	int	sum;
	int	nb;
	
	if (ac == 2)
	{
		i = 0;
		sum = 0;
		nb = 0;
		while (ag[1][i])
		{
			if (ag[1][i] >= '0' && ag[1][i] <= '9')
				nb = nb * 10 + (ag[1][i] - '0');
			else
			{
				write (1, "0\n", 2);
				return ;
			}
			i++;
		}
		/*if (nb < 0)
		{
			write (1, "0", 1);
			write (1, "\n", 1);
		}*/
		else
		{
			j = 2;
			while (j <= nb)
			{
				if (prime(j))	
					sum = sum + j;
				j++;
			}
			putnb(sum);
			write (1, "\n", 1);
		}
		
	}
	else
		write(1, "0\n", 2);
}
