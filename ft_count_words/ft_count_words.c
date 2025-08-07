#include <unistd.h>
#include <stdio.h>
int	ft_count_words(char *str)
{
	int	i;
	int	w;
	int	n;

	n = 0;
	w = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (w == 1)
			{
				n++;
				w = 0;
			}
		}
		else 
			w = 1;
		i++;
	}
	return (n);
}
int	main()
{
	printf("%d",ft_count_words("Hello World"));
}
