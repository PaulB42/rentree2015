#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

#include <stdio.h>
int	main()
{
	int *a;
	int *b;
	int i;

	*a = 10;
	*b = 2;
	i = *a;
	*a = *a / *b;
	*b = i % *b;
	printf("%d", *a);
	return (0);
}
