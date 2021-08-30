/* Copies n bytes from memory area src to memory area dst 
Behaviour is undefined in case of overlap*/

void	*memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return(dst);
	while (n--)
		*d++ = *s++;
	return (dst);
}
