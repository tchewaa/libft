/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 10:30:52 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/22 01:55:02 by tchewa           ###   ########.fr       */
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
	size_t	k;
	char	**str;
	size_t	words;
	size_t	letters;

	i = 0;
	j = 0;
	words = count_words((char*)s, c);
	if (!(str = (char **)malloc(sizeof(char*) * words)))
		return (NULL);
	while (s[i] != '\0')
	{
		while ((char)s[i] == c && s[i] != '\0')
			i++;
		while (j < words && s[i] != c && s[i] != '\0')
		{
			k = 0;
			letters = count_letters(((char *)s + i), c);
			str[j] = (char*)malloc(sizeof(char) * (letters + 1));
			while (s[i] != c && s[i] != '\0')
			{
				str[j][k] = (char)s[i];
				i++;
				k++;
			}
			str[j][k] = '\0';
			j++;
		}
	}
	return (str);
}
