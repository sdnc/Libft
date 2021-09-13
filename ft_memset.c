void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (len--)
		*str++ = (unsigned char)c;
	return (s);
}
