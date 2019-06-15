/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 07:19:27 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/15 02:43:22 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;
	size_t		space;

	i = 0;
	j = 0;
	space = dstsize - ft_strlen(dest) - 1;
	if (space <= ft_strlen(dest))
	{
		return (ft_strlen(dest) + dstsize);
	}
	while (i < dstsize && dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		i++;
		j++;
	}
	return (i);
}
