int		ft_sizecmp(void	*file1, void *file2)
{
	t_file	*f1;
	t_file	*f2;

	f1 = (t_file *)file1;
	f2 = (t_file *)file2;
	return(f1->stats.st_size - f2->stats.st_size ?
	f1->stats.st_size - f2->stats.st_size : ft_sizecmp(file1, file2));
}
