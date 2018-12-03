/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:46:55 by vladuhin          #+#    #+#             */
/*   Updated: 2018/11/09 15:12:53 by vladuhin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	char	*src1;
	int		i;
	int		j;

	i = 0;
	j = 0;
	src1 = (char *)src;
	while (src1[i] != '\0')
		i++;
	if (!(dest = (char*)malloc(i + 1)))
		return (NULL);
	while (j < i)
	{
		dest[j] = src1[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
