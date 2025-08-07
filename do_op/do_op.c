#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	r;
	
	i = 0;
	s = 1;
	r = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		s = s * - 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (s * r);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		write (1, "-", 1);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		write (1, &"0123456789" [n] , 1);
}

int	main(int ac, char **ag)
{
	int	n;
	
	if (ac == 4)
	{
		if (ag[2][0] == '+')
		{
			n = ft_atoi(ag[1]) + ft_atoi(ag[3]);
			ft_putnbr(n);
		}
		else if (ag[2][0] == '-')
		{
			n = ft_atoi(ag[1]) - ft_atoi(ag[3]);
			ft_putnbr(n);
		}
		else if (ag[2][0] == '*')
		{
			n = ft_atoi(ag[1]) * ft_atoi(ag[3]);
			ft_putnbr(n);
		}
		else if (ag[2][0] == '/')
		{
			if (ft_atoi(ag[3]) == 0)
                        {
                                write(1, "error\n", 6);
                                return 0;
                        }
			n = ft_atoi(ag[1]) / ft_atoi(ag[3]);
			ft_putnbr(n);
		}
		else if (ag[2][0] == '%')
                {
			if (ft_atoi(ag[3]) == 0)
			{
				write(1, "error\n", 6);
				return 0;
			}
                        n = ft_atoi(ag[1]) % ft_atoi(ag[3]);
                        ft_putnbr(n);
                }
	}
	write (1, "\n", 1);
}
