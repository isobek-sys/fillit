/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additional.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 12:10:16 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/15 12:17:55 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*get_next_tetr(char *tetrs)
{
	while (*tetrs)
	{
		if (*tetrs == '\n' && *(tetrs + 1) == '\n')
			return (tetrs + 2);
		++tetrs;
	}
	return (tetrs);
}

int			len_before_ch(char *str, char ch)
{
	char	*tmp;

	tmp = str;
	while (*str && *str != ch)
		++str;
	return (str - tmp);
}

int			count_numb_of_tetr(char *maps)
{
	int		tetr;

	tetr = 1;
	while (*maps)
	{
		if (*maps == '\n' && *(maps + 1) == '\n')
			++tetr;
		++maps;
	}
	return (tetr);
}

char		*ft_strnstr(const char *haystack, const char *needle, int len)
{
	int		i;
	int		r;

	i = -1;
	r = 0;
	while (*haystack && len >= ft_strlen(needle))
	{
		while (needle[++i])
			if (needle[i] != haystack[i])
				r = 1;
		if (!r)
			return ((char *)haystack);
		--len;
		i = -1;
		r = 0;
		++haystack;
	}
	return (NULL);
}

char		*ft_strsub(char const *s, int start, int len)
{
	char	*res;
	int		i;

	i = -1;
	res = ft_strnew(len);
	while (++i < len)
		res[i] = s[start++];
	return (res);
}
