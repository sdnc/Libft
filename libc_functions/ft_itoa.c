size_t	get_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	long	nb;
	char	*str;

	len = get_len(n);
	nb = n;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -n;
	}
	if (nb == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nb)
	{
		str[len--] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}
