#include <unistd.h>

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
	int	r;
	r = ac - 1;
	putnb(r);
	write (1, "\n", 1);
}
