void	ft_putnbr(int n)
{
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	if (n < 10 && n >= 0)
		ft_putchar(n + 48);
}
