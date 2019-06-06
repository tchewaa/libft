#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    size_t len;
    unsigned char *cdest;
    unsigned char *csrc;
    char *temp;

    cdest = (unsigned char *)dest;
    csrc = (unsigned char *)src;
    i = 0;
    len = ft_strlen(csrc);
    temp = (int *) malloc(len * sizeof(n));
    if (cdest == NULL && csrc == NULL && temp == NULL)
        return (NULL);
    ft_memcpy(temp, csrc, n);
    ft_memcpy(cdest, temp, n);
    free(temp);
    return (cdest);
}