/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 10:52:01 by tchewa            #+#    #+#             */
/*   Updated: 2019/06/22 11:47:46 by tchewa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	level(int n)
{
	int		i;
	int		count;

	count = 0;
	i = 1;
	if (n < 0)
		n = -1 * n;
	if (n == 0)
		count++;
	else if (n != 0)
	{
		while (n / i != 0)
		{
			i = i * 10;
			count++;
		}
	}
	return (count);
}

char		*ft_itoa(int n)
{
	char	*num;
	int		count;
	int		negative;

	num = 0;
	negative = 0;
	if (n < 0)
		negative = 1;
	count = level(n);
	if (!(num = (char *)malloc(sizeof(char) * (count + 1 + negative))))
		return (0);
	if (n < 0)
	{
		n = -1 * n;
		count++;
		num[0] = '-';
	}
	num[count] = '\0';
	while (--count >= negative)
	{
		num[count] = '0' + (n % 10);
		n = (n - (n % 10)) / 10;
	}
	return (num);
}
