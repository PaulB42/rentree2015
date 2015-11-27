char	*ft_strnew(size_t size)
{
	char *new;
	int i;
	
	i = 0;
	new = (char*)malloc(sizeof(char) * (size + 1));
	while (i <= size + 1)
	{
		new[i] = '\0';
		i++;
	}
	return (new);
}
