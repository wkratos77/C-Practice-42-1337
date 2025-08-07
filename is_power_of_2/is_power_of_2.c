#include <stdio.h>
int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (i < n)
	{
		i = i * 2;
	}
	if (i == n)
	       return (1);
	return (0);
}
int main ()
{
	int	r = is_power_of_2(3);
	printf ("%d",r);
}
