/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:01:54 by vladuhin          #+#    #+#             */
/*   Updated: 2018/11/12 13:52:11 by vladuhin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strcount(char const *str, char c)
{
	size_t count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str != '\0')
			count++;
		while (*str != c && *str != '\0')
			str++;
	}
	return (count);
}

static char		*ft_fill(char const *str, size_t n, size_t len)
{
	char	*mas;
	size_t	i;

	i = 0;
	mas = (char *)malloc(sizeof(char) * (len + 1));
	while (len > 0)
	{
		mas[i] = str[n];
		n++;
		len--;
		i++;
	}
	mas[i] = '\0';
	return (mas);
}

static size_t	ft_len(const char *str, size_t n, char c)
{
	size_t len;

	len = 0;
	while (str[n] != '\0' && str[n] != c)
	{
		n++;
		len++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**arr;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if (!(arr = (char**)malloc(sizeof(char*) * (ft_strcount(s, c) + 1))))
		return (NULL);
	while (s[j] != '\0')
	{
		while (s[j] == c)
			j++;
		len = ft_len(s, j, c);
		if (len != 0)
		{
			arr[i] = ft_fill(s, j, len);
			i++;
		}
		j = j + len;
	}
	arr[i] = NULL;
	return (arr);
}
