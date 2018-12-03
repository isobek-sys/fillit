/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 21:35:53 by vladuhin          #+#    #+#             */
/*   Updated: 2018/11/06 15:35:29 by vladuhin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destptr, const char *srcptr, size_t n)
{
	size_t i;
	size_t j;
	size_t len_d;
	size_t len_s;

	i = 0;
	j = 0;
	len_d = ft_strlen(destptr);
	len_s = ft_strlen(srcptr);
	if (len_d >= n)
		return (n + len_s);
	while (destptr[i])
		i++;
	while ((n - 1) > i && srcptr[j])
	{
		destptr[i] = srcptr[j];
		j++;
		i++;
	}
	destptr[i] = '\0';
	return (len_s + len_d);
}
