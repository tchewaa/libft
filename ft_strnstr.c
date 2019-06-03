/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:22:53 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/03 17:04:32 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t i;
	size_t j;
	size_t strlen;

	i = 0;
	strlen = ft_strlen(substr);
	if (!substr)
		return ((char *)str);
	while (str[i] && (strlen + i <= len))
	{
		j = 0;
		while (str[i + j] == substr[j])
		{
			if (strlen - 1 == j)
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
