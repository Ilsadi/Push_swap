#include "push_swap.h"
#include <stdio.h>

int main(int ac, char **av)
{
	int size;
	
	if (!parse_args(ac, av, &size))
	{
		printf("Mauvais parsing\n");
		return (0);
	}
	printf("Bon parsing\n");
	return (1);
}