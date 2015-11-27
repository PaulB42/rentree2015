char 	**ft_strsplit(const char *s, char c)
{
	int i;
	int size;
	char **mem;

	i = 0;
	size = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
		{	
			while (s[i] != c)
				i++;
			size++;
			i++;
		}
		else if (s[i] = c && s[i + 1] == c)
			i++;		
	}
	mem = (char **)malloc(sizeof(char**) * (size + 1));
	while (dsfe)
		size--;
		malloc mem[size + 1]
		remplir tableau
	}
	return (mem); 
}
