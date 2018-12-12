/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:46:55 by vladuhin          #+#    #+#             */
/*   Updated: 2018/12/12 14:22:29 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	size_t	len;
	char	*res;

	len = ft_strlen(src);
	res = (char *)malloc((++len) * sizeof(char));
	if (res)
	{
		res[--len] = '\0';
		while ((int)(--len) >= 0)
			res[len] = src[len];
		return (res);
	}
	return (NULL);
}
