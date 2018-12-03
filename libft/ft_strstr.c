/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 18:23:35 by vladuhin          #+#    #+#             */
/*   Updated: 2018/11/02 19:04:20 by vladuhin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*haystack2;

	i = 0;
	haystack2 = (char *)haystack;
	if (*needle == '\0')
		return (haystack2);
	while (haystack2[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack2[i + j])
		{
			j++;
			if (needle[j] == '\0')
				return (haystack2 + i);
		}
		i++;
	}
	return (0);
}
