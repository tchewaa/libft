/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <tchewa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:26:14 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/05 18:08:38 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i;
    unsigned char *cdest;
    unsigned char *csrc;

    csrc = (unsigned char *)src;
    cdest = (unsigned char *)dest;
    i = 0;

	if (csrc == NULL && cdest == NULL)
		return (NULL);
    while (cdest[i] && i < n)
    {
        cdest[i] = csrc[i];
        if (csrc[i] == c)
            return (&cdest[i + 1]);
        i++;
    }
    return (cdest);
}
