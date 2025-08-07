#include <stdio.h>
#include <stdlib.h>
int	*ft_range(int start, int end)
{
	int	i;
	int	*rng;

	if (start < end)
	{
	        rng = malloc(sizeof (int) * ((end - start) + 1));
		if(!rng)
			return NULL;
		i = 0;
		while (start <= end)
		{
			rng[i] = start;
			i++;
			start++;
		}
	}
	else
	{
		rng = malloc(sizeof (int) * ((start - end) + 1));
		if(!rng)
			return NULL;
		i = 0
		while (start >= end)
		{
			rng[i] = start;
			start--;
			i++;
		}
	}
	return (rng);
}

int main()
{
	int	*tab;
	int	i;

	tab = ft_range(3,0);
	i = 0;
	while (i < 4)
	{
		printf("%d\n",tab[i]);
			i++;
	}
}
