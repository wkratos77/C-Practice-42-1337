#include <unistd.h>

int     str_in(char *s, char c, int l)
{
        int	k;

	k = 0;
        while (k < l)
        {
                if (s[k] == c)
                        return (1);
                k++;
        }
        return (0);
}

int     main(int ac, char **ag)
{
        int     i;
        int     j;
        int     l;
        char    str[100];

        if (ac == 3)
        {
                i = 0;
                l = 0;
                while(ag[1][i])
                {
			j = 0;
			while (ag[2][j])
			{
                        	if(ag[1][i] == ag[2][j])
                        	{
					if (!str_in(ag[1], ag[1][i], i))
					{                
						str[l] = ag[1][i];
						l++;
					}
					break;
				}
				j++;
			}
			i++;
                }
                str[l] = '\0';                        
		l = 0;                        
		while(str[l])        
		{
        
			write(1, &str[l], 1);

			l++;

		}
        }
        write (1, "\n", 1);
}
