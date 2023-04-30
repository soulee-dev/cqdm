# cqdm
tqdm styled progress bar for C

# Usage
```c
int iter = 2147483647;
t_cqdm cqdm = create_cqdm(2147483647, 15);
for (int i = 0; i < iter; i++)
  update_cqdm(&cqdm, i);
```
# create_cqdm(int total, int size)
```c
int total // size of total
int size // size of progreess bar
```

# Example
```c
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
```
