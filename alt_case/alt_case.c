#include <unistd.h>


char    *ft_alt_case(char *str)
{
    int i;
    int new_i;

    i = 0 ;
    new_i = 0;
    while (str[i])
    {
    if (i == 0 || ((str[i - 1] == ' ' || str[i - 1] == '\t') && str[i] != ' ' && str[i] != '\t'))
            new_i++;
        if ( new_i % 2 == 0 )
        {
            if (str[i] >= 97 && str[i] <= 122)
                str[i] -= 32;
        }
        else
        {
            if (str[i] >= 65 && str[i] <= 90)
                str[i] += 32;
        } 
 
        
        i++;
    }
    return str;
}
void    ft_putstr(char *str)
{
    int i ;

    i = 0;
    while (str[i])
        i++;
    write(1, str, i);
}
int main(int argc , char *argv[])
{
    if (argc == 2)
    {
        ft_putstr(ft_alt_case(argv[1]));
    }
    write(1, "\n", 1);
}