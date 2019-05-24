/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:57:55 by tchewa            #+#    #+#             */
/*   Updated: 2019/05/24 11:10:43 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int strlen;

	i = 0;
	strlen = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[strlen + i] = src[i];
		i++;
	}
	dest[strlen + i] = '\0';
	return (dest);
}
