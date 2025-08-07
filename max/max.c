int	max(int* tab, unsigned int len)
{
	int	i;
	int	r;
	
	i = 1;
	if (len == 0)
		return 0;
	r = tab[0];
	while (i < len)
	{
		if (tab[i] > r)
			r = tab[i];
	i++;
	}
	return (r);
}
