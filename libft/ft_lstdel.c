/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:15:53 by vladuhin          #+#    #+#             */
/*   Updated: 2018/11/11 19:24:00 by vladuhin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lst;
	t_list *temp;

	if (!alst || !*alst || !del)
		return ;
	lst = *alst;
	while (lst)
	{
		temp = lst->next;
		(*del)(lst->content, lst->content_size);
		free(lst);
		lst = temp;
	}
	*alst = NULL;
}
