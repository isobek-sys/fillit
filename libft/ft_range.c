/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 19:38:31 by vladuhin          #+#    #+#             */
/*   Updated: 2018/11/11 19:38:51 by vladuhin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int *arr;
	int i;
	int len;

	i = 0;
	if (min >= max)
		return (0);
	len = max - min;
	arr = (int*)malloc(sizeof(int) * len);
	while (i < len)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
