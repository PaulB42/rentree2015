
char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *mem;
	int i;

	i = 0;
	mem = (char *)malloc(sizeof(char) * len);
	if (mem == NULL)
		return (NULL);
	while (i < len)
	{
		mem[i] = s[start - 1 + i];
		i++;
	}
	return (mem);
}
