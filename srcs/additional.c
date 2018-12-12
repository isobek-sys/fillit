/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additional.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 12:10:16 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/12 12:12:26 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int			len_before_ch(char *str, char ch)
{
	char	*tmp;

	tmp = str;
	while (*str && *str != ch)
		++str;
	return (str - tmp);
}
