#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	r;
	int	s;

	i = 0;
	r = 0;
	s = 1;
	while (str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		s = s * - 1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * s);
}
int	main()
{
	char s[20] = "  -2324ab12";
	printf("%d",ft_atoi(s));
}
