#include <stdio.h>
#include <stdlib.h>



char	*ft_itoa(int n)
{
	int size;
	int nbr;
	char *mem;

	size = 0;
	nbr = n;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		size++;
	}
	if (n < 0)
		mem = (char *)malloc(sizeof(char) * (size + 2));
	else
		mem = (char *)malloc(sizeof(char) * (size + 1));
	if (mem == NULL)
		return (NULL);
	mem[size] = '\0';
	size--;
	while (n != 0)
	{
		mem[size] = n % 10;
		n = n / 10;
		size--;
	}
	if (size != 0)
		mem[size] = '-';
	return (mem);
}

int	main()
{
	printf("%s", ft_itoa(1000));
return (0);
}
