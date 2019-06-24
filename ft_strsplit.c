/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 10:30:52 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/24 14:48:25 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		count_words(char *s, char c)
{
	size_t	i;
	size_t	res;

	res = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			res++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (res);
}

static	size_t		count_letters(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**str;
	size_t	words;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	words = count_words((char*)s, c);
	if (!(str = (char **)malloc(sizeof(char*) * words)))
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != '\0' && s[i] != c)
		{
			str[j] = ft_strsub(s, i, count_letters((char*)s + i, c));
			j++;
			i = i + count_letters((char*)s + i, c);
		}
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	return (str);
}
