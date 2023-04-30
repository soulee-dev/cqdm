#ifndef CQDM.H
# define CQDM.H

# include <stdio.h>
# include <sys/time.h>
# include <unistd.h>

// Structure to hold progress bar information
typedef struct	s_cqdm
{
	int		total;
	int		count;
	int		size;
	double	average_time;
	double	last_time;
	double	total_time;
}				t_cqdm;

t_cqdm	create_progress(int total, int size);
void	update_progress(t_cqdm	*progress, int x);
#endif