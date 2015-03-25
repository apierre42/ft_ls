#ifndef FT_LS_H
# define FT_LS_H

typedef struct			s_file
{
	char			name[256];
	char			lenname[MAXLEN];
	struct stats		stats;
}				t_file;
