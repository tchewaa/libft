/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:02:15 by tchewa            #+#    #+#             */
/*   Updated: 2019/05/22 15:58:11 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[len + i] = src[i - n];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

int		main(void)
{
	char src[50] = "Dumela";
	char dest[50] = "Le kae";
	printf("%s", ft_strncat(dest, src, 5));
	return (0);
}
