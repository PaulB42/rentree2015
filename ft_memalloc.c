void	*ft_memalloc(size_t size)
{
	size_t size;
	
	size = (size_t)malloc(sizeof(size_t));
	if (size == NULL)
		return (NULL);
	size = 0;
	return (size);
}
