int	ft_namecmp(void *file1, void *file2)
{
	t_file	*f1;
	t_file	*f2;

	f1 = (t_file *)file1;
	f2 = (t_file *)file2;
	return (ft_strcmp(f1->name, f2->name));
}

int	ft_rnamecmp(void *file1, void *file2)
{
	t_file	*f1:
	t_file	*f2;

	f1 = (t_file *)file1;
	f2 = (t_file *)file2;
	return (ft_strcmp(f2->name, f1->name));
}
