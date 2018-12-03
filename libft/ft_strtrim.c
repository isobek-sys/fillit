/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 21:43:28 by vladuhin          #+#    #+#             */
/*   Updated: 2018/11/09 20:06:22 by vladuhin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_counter(char const *s)
{
	int count;

	count = 0;
	while (*s)
	{
		if (*s == ' ' || *s == '\n' || *s == '\t')
		{
			count++;
			s++;
		}
		else
			break ;
	}
	return (count);
}

static int		ft_counter1(char const *s)
{
	int count;
	int i;

	count = 0;
	i = ft_strlen(s) - 1;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			count++;
			i--;
		}
		else
			break ;
	}
	return (count);
}

char			*ft_strtrim(char const *s)
{
	char			*arr;
	int				len;
	unsigned int	start;
	int				i;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	start = ft_counter(s);
	if (ft_counter(s) == (int)ft_strlen(s))
		len = 0;
	else
		len = len - ft_counter(s) - ft_counter1(s);
	if (!(arr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (len > 0)
	{
		arr[i] = s[start];
		i++;
		start++;
		len--;
	}
	arr[i] = '\0';
	return (arr);
}
