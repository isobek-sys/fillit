/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 18:17:06 by vladuhin          #+#    #+#             */
/*   Updated: 2018/11/09 19:35:10 by vladuhin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*arr;

	arr = (char *)s;
	i = ft_strlen(arr);
	while (i >= 0)
	{
		if (arr[i] == c)
			return (arr + i);
		i--;
	}
	return (NULL);
}
