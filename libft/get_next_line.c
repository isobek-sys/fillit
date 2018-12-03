/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:07:37 by vladuhin          #+#    #+#             */
/*   Updated: 2018/11/28 17:00:04 by vladuhin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_gnl		*get_list(t_gnl **lst, int fd)
{
	t_gnl	*head;
	t_gnl	*new;

	if (!(*lst))
	{
		(*lst) = ft_memalloc(sizeof(t_gnl));
		(*lst)->fd = fd;
	}
	head = (*lst);
	while ((*lst))
	{
		if ((*lst)->fd == fd)
			break ;
		if ((*lst)->next == NULL)
		{
			(*lst)->next = ft_memalloc(sizeof(t_gnl));
			(*lst) = (*lst)->next;
			(*lst)->fd = fd;
			break ;
		}
		(*lst) = (*lst)->next;
	}
	new = (*lst);
	(*lst) = head;
	return (new);
}

int			ft_count(char *content)
{
	int i;

	i = 0;
	while (content[i] != '\0' && content[i] != '\n')
		i++;
	return (i);
}

int			create_content(t_gnl *temp, char **new, char *buff)
{
	int read_line;

	while ((read_line = read(temp->fd, buff, BUFF_SIZE)))
	{
		buff[read_line] = '\0';
		if (!temp->content)
			temp->content = ft_strdup(buff);
		else
		{
			(*new) = ft_strjoin(temp->content, buff);
			free(temp->content);
			temp->content = (*new);
		}
		if (ft_strchr(buff, '\n'))
			break ;
	}
	return (read_line);
}

int			get_next_line(int const fd, char **line)
{
	static t_gnl	*lst;
	char			buff[BUFF_SIZE + 1];
	int				read_line;
	t_gnl			*temp;
	char			*new;

	if (fd < 0 || BUFF_SIZE <= 0 || read(fd, 0, 0) == -1)
		return (-1);
	temp = get_list(&lst, fd);
	read_line = create_content(temp, &new, buff);
	if (read_line < 0)
		return (-1);
	if (read_line == 0 && (temp->content == NULL || temp->content[0] == '\0'))
		return (0);
	if (ft_strchr(temp->content, '\n'))
	{
		(*line) = ft_strsub(temp->content, 0, ft_count(temp->content));
		new = ft_strdup(ft_strchr(temp->content, '\n') + 1);
		free(temp->content);
		temp->content = new;
		return (1);
	}
	(*line) = ft_strdup(temp->content);
	ft_strdel(&temp->content);
	return (1);
}
