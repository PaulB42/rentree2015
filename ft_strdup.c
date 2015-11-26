
#include <stdlib.h>

char	*strdup(const char *s)
{
	char *memory;
	int		i;

	memory = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i] != '\0')
	{
		memory[i] = s[i]
		i++;
	}
	return (memory);
}
