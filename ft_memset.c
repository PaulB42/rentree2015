void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char var;
	int count;

	count = 0;
	var = (unsigned char *)s;
	while(s[count] && count < n)
	{
		var[count] = (unsigned char)c;
		count++;
	}
	return (*s);
}
