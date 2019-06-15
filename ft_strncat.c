/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:02:15 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/15 02:43:31 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(dest);
	while (n > 0)
	{
		dest[len + i] = src[i];
		i++;
		n--;
	}
	dest[len + i] = '\0';
	return (dest);
}
