int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (s1[i] && s2[i] && n--)
		if (*s1++ != *s2++)
			return ((unsigned char *)*--s1 - (unsigned char *)*--s2);
	return (0);
}
