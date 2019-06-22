/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 07:19:27 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/22 02:09:48 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;
	size_t		strlen;

	i = 0;
	j = 0;
	strlen = ft_strlen(src);
	while (dest[i] && i < dstsize)
		i++;
	while (src[i] && (i + j + 1) < (dstsize))
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != dstsize)
		dest[i + j] = '\0';
	return (i + strlen);
}
