#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char 	*copy;
	size_t	i;

	if (!(copy = malloc((sizeof(char)) * ft_strlen(s1) + 1)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		copy[i] = s1[i];
		i++; 
	}
	copy[i] = '\0';
	return (copy);		
}
