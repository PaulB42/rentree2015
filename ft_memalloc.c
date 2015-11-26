#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	size_t size = NULL;

	size = malloc(sizeof(size_t));
	if (size == NULL)
		return (NULL);
	return (size);
	
	printf("Quel age avez vous ?i");
	scanf("%d", size);
	printf("Vous avez %d ans\n", *size);

	free(size);
	return (0);
}
