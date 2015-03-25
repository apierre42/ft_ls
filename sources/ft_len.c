int			ft_intlen(int i)
{
	int j;

	ret = 1;
	while (i /= 10)
		j++;
	return (j);
}

int			ft_longlen(long long int i)
{
	int j;

	ret = 1;
	while (i /= 10)
		j++;
	return (j);
}
