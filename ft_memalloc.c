
#include <stdio.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	size_t *ptr;

	ptr = 0;
	ptr = malloc(size*sizeof(int));
	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
	free(ptr);
}
