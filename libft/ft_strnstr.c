/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 19:23:55 by vladuhin          #+#    #+#             */
/*   Updated: 2018/11/03 15:47:12 by vladuhin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*haystack2;

	i = 0;
	haystack2 = (char *)haystack;
	if (*needle == '\0')
		return (haystack2);
	while (haystack2[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack2[i + j] && ((j + i) < len))
		{
			j++;
			if (needle[j] == '\0')
				return (haystack2 + i);
		}
		i++;
	}
	return (0);
}
