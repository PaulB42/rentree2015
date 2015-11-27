char    ft_strrev(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	while (str[i] != 0)
	{
		ft_putchar(i);
		i--;
	}
	return (*str);
}

int     main()
{
	ft_strrev("Hello World");
	return (0);
}
