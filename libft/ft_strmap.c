/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:37:04 by vladuhin          #+#    #+#             */
/*   Updated: 2018/11/09 18:39:40 by vladuhin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*arr;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(arr = (char *)malloc(ft_strlen((char *)s) + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		arr[i] = (*f)(s[i]);
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
