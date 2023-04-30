#include "src/cqdm.h"
#include <stdio.h>

int	main()
{
	int	iter;
	t_cqdm	cqdm;

	iter = 2147483647;
	cqdm = create_cqdm(iter, 30);
	for (int i = 0; i < iter; i++)
		update_cqdm(&cqdm, i);	
	return (0);
}
