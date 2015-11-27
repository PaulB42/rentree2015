#include <stdlib.h>
#include <stdio.h>
char 	*ft_strtrim(const char `*s)
{
	char *mem;
	int i;
	int size;
	

	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == ',' || s[i] == '\t' || s[i] == '\n')
			i++;
		else 
		{
			i++;
			size++;
		}
	}
	mem = (char *)malloc(sizeof(char*) * (size + 1));
	i = 0;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == ',' || s[i] == '\t' || s[i] == '\n')
			i++;
		else
			mem[i] = s[i];
		i++;			
	}
	return (mem);
}

int	main(int argc, char **argv)
{
	printf("%s", ft_strtrim(argv[1]));
	return (0);
}
