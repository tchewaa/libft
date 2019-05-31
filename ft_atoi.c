/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:27:00 by tchewa            #+#    #+#             */
/*   Updated: 2019/05/31 16:23:34 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_atoi(const char *str)
{
	int i;
	int counter;
	char *dest;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			dest[counter++] = str[i];
		}
		i++;
	}
	dest[counter] = '\0';
	return (dest);
}

int		main(void)
{
	char str[] = "3 65";
	printf("%s\n", ft_atoi(str));
	return (0);
}
