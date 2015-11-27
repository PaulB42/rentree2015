void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char var;
	int count;

	count = 0;
	var = (char *)s;
	while(s[count] && count < n)
	{
		var[count] = c;
		count++;
	}
	return (*s);
}
