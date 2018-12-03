/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:40:00 by vladuhin          #+#    #+#             */
/*   Updated: 2018/11/09 20:04:54 by vladuhin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int count;

	count = 0;
	if (n < 0)
	{
		n = n * -1;
		count++;
	}
	while (n / 10 > 0)
	{
		count++;
		n = n / 10;
	}
	count++;
	return (count);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * (ft_count(n) + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
		len = ft_count(n) + 1;
	}
	else
		len = ft_count(n);
	str[len] = '\0';
	while (n / 10 != 0)
	{
		str[--len] = n % 10 + '0';
		n = n / 10;
	}
	str[--len] = n + '0';
	return (str);
}
