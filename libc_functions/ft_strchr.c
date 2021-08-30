char	*ft_strchr(const char *s, int c)
{
	while (*s)	
		if (*s++ == (char)c)
			return ((char *)s - 1);
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
