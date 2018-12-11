/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parce_maps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 15:37:09 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/11 16:41:02 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void		del_empty_str(char *maps)
{
	while (*maps)
		if (ft_strnstr(maps, "....\n", 5))
			ft_memmove(maps, maps + 5, ft_strlen(maps));
		else
			++maps;
}
