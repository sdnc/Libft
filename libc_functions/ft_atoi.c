int	ft_atoi(const char *str)
{
	int	result;
	int	neg;
	
	result = 0;
	neg = 1;
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
		result = (result * 10) + (*str++ - '0');
	return (result * neg);
		
}
