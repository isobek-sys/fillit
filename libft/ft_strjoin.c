/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 21:33:45 by vladuhin          #+#    #+#             */
/*   Updated: 2018/11/12 13:47:55 by vladuhin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	char	*arr;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(arr = (char *)malloc(sizeof(arr) * (len + 1))))
		return (NULL);
	i = 0;
	while (*s1)
	{
		arr[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		arr[i] = *s2;
		i++;
		s2++;
	}
	arr[i] = '\0';
	return (arr);
}
