void	print_acl_attr(t_file **file, int i, char *arg)
{
	if (listxattr(ft_duostr(arg, '/', file[i]->name), NULL, 256) > 0)
		ft_putstr("@ ");
	else
		ft_putstr("  ");
}

void		print_date(t_file *file)
{
	if (file->stats.st_mtime > time(0) - (365 / 2 * 86400) &&
		file->stats.st_mtime < time(0) + (365 / 2 * 86400))
		ft_putstr_sub(ctime(&file->stats.st_mtime), 4, 12);
	else
		ft_putstr_sub(ctime(&file->stats.st_mtime), 4, 7),
		ft_putchar(' '),
		ft_putstr_sub(ctime(&file->stats.st_mtime), 20, 4);
}
