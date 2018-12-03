/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 22:36:53 by vladuhin          #+#    #+#             */
/*   Updated: 2018/11/02 18:16:58 by vladuhin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*arr;

	i = 0;
	arr = (char *)s;
	while (arr[i] != '\0')
	{
		if (arr[i] == c)
			return (arr + i);
		i++;
	}
	if (c == '\0')
		return (arr + i);
	return (NULL);
}
