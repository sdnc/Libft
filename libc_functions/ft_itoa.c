char	*ft_itoa(int n)
{
	char		base[] = "0123456789";
	size_t		len;
	unsigned int	nbr;
	char		*result;

	if (n < 0)
		nbr = -n;
		len = 2;
	else
		nbr = n;
		len = 1;
	while ((nbr /= 10) > 0)
		len++;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len--] = '\0';
	while ((nbr /= 10) >= 0)
		result[len--] = base[nbr % 10];
	if (n < 0)
		result[0] = "-";
	return (result);
}

// Can I save one line of code by (nbr /= 10) >= 0? 

