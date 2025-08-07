/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:37:45 by wkrati            #+#    #+#             */
/*   Updated: 2025/08/07 22:13:13 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	nbrlen(long nbr)
{
	int	l;
	
	l = 0;
	if (nbr < 0)
	{
		nbr = nbr * - 1;
		l++;
	}
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr = nbr / 10;
		l++;
	}
	return (l);
}

char  *ft_itoa(int nbr)
{
	int	i;
	long	n;
	char	*str;
	
	n = nbr;
	i = nbrlen(n);
	str = malloc (sizeof (char) * i + 1);
	if(!str)
		return (NULL);
	str[i] = '\0';
	i--;
	if (n < 0)
	{
		str[0] = '-';
		n = n * - 1;
	}
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (str);
}

int main ()
{
	printf("%s\n", ft_itoa(1337));
	printf("%s\n", ft_itoa(-1337));
	printf("%s\n", ft_itoa(0));
}
