/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:55:36 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/15 03:38:47 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *substr)
{
	int i;
	int j;

	i = 0;
	if (str == NULL && substr == NULL)
		return (NULL);
	if (!substr)
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (substr[j] != '\0')
		{
			if (str[i + j] != substr[j])
				break ;
			j++;
		}
		if (substr[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
