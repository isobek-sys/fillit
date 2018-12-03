/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:06:01 by vladuhin          #+#    #+#             */
/*   Updated: 2018/11/06 21:20:51 by vladuhin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *arr;

	arr = (char *)malloc(size + 1);
	if (arr == NULL)
		return (NULL);
	if (arr)
		ft_bzero(arr, size + 1);
	return (arr);
}
