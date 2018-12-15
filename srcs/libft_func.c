/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 10:24:19 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/15 13:36:31 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putendl(char const *s)
{
	while (*s)
		write(1, &(*(s++)), 1);
	write(1, "\n", 1);
}

char			*ft_strnew(int size)
{
	char		*arr;

	arr = (char *)malloc((size + 1) * sizeof(char));
	while (size >= 0)
		arr[size--] = '\0';
	return (arr);
}

int				ft_strlen(const char *s)
{
	const char	*tmp;

	tmp = s;
	while (*tmp)
		++tmp;
	return (tmp - s);
}

void			ft_strdel(char **str)
{
	free(*str);
	*str = NULL;
}

void			*ft_memmove(char *dst, const char *src, int len)
{
	int			i;

	i = -1;
	if (src < dst)
		while ((--len) >= 0)
			dst[len] = src[len];
	else
		while (++i < len)
			dst[i] = src[i];
	return ((char *)dst);
}
