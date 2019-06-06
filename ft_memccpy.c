/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:32:38 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/06 10:22:04 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*mdest;
	unsigned char			*msrc;

	i = 0;
	msrc = (unsigned char *)src;
	mdest = (unsigned char *)dest;
	if (msrc == NULL && mdest == NULL)
		return (NULL);
	while (mdest[i] && i < n)
	{
		mdest[i] = msrc[i];
		if (msrc[i] == c)
			return (&mdest[i + 1]);
		i++;
	}
	return (NULL);
}
