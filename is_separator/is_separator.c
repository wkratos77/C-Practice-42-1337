#include <unistd.h>

int	is_separator(char c)
{
	if (c == '\t' || c == ' ')
		return 0;
	else 
		return 1;
}
