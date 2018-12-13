/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 20:30:27 by vladuhin          #+#    #+#             */
/*   Updated: 2018/12/13 09:55:03 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*dst1;

	src1 = (unsigned char*)src;
	dst1 = (unsigned char*)dst;
	i = 0;
	if (src1 < dst1)
		while ((int)--len >= 0)
			dst1[len] = src1[len];
	else
		while (i < len)
		{
			dst1[i] = src1[i];
			++i;
		}
	return (dst);
}
