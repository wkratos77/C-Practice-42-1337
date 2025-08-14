#include <stdio.h>

int	ftstrlen(char *str)
{
	if (str[0] == '\0')
		return 0;
	return (1 + ftstrlen(str + 1));
}
int main()
{
	printf("%d",ftstrlen("walid"));
}
