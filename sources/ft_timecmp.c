int		ft_rmtimecmp(void *file1, void *file2)
{
	t_file	*f1;
	t_file	*f2;

	f1 = (t_file)file1;
	f2 = (t_file)file2;
	return (f1->stats.st_mtime - f2->stats.st_mtime ?
	f1->stats.st_mtime - f2->stats.st_mtime :
	ft_rmtimecmp(file1, file2));
}

int             ft_ratimecmp(void *file1, void *file2)
{
        t_file  *f1;
        t_file  *f2;

        f1 = (t_file)file1;
        f2 = (t_file)file2;
        return (f1->stats.st_atime - f2->stats.st_atime ?
        f1->stats.st_atime - f2->stats.st_atime :
        ft_ratimecmp(file1, file2));
}

int             ft_rctimecmp(void *file1, void *file2)
{
        t_file  *f1;
        t_file  *f2;

        f1 = (t_file)file1;
        f2 = (t_file)file2;
        return (f1->stats.st_ctime - f2->stats.st_ctime ?
        f1->stats.st_ctime - f2->stats.st_ctime :
        ft_rctimecmp(file1, file2));
}

