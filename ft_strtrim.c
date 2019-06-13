/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 09:12:05 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/13 15:24:50 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;
	char *str;

	len = ft_strlen(s) - 1;
	str = (char *)malloc(str * sizeof(char));
	i = 0;
	if(!str)
		return (NULL);
	while (s[i] != '\0' && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
		i++;
	str[i] = '\0';
	return (str);
}
