size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (dst[len] && len < dstsize)
		len++;
	while (src[i] && (len + i + 1) < dstsize)
	{	
		dst[len + i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[len + i] = '\0';
	return (ft_strlen(src) + len);
}
