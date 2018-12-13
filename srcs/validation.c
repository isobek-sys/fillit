/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:53:00 by vladuhin          #+#    #+#             */
/*   Updated: 2018/12/13 11:30:49 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static int	check_newline(char *content, int len)
{
    int		i;
    int		j;

    i = 4;
    j = 0;
    while(i < len)
    {
        while (j < 3)
        {
            if (content[i] == '\n')
                i = i + 5;
            else
                return(0);
            j++;
        }
        j = 0;
        if (content[i] == '\n' && content[i + 1] == '\n')
            i = i + 6;
        else if (content[i] == '\n' && content[i + 1] == '\0')
            break ;
        else
            return (0);
    }
    return (1);
}

static int	check_other(char *cont)
{
	int		sym;

	if (!*cont)
		return(0);
	sym = 0;
	while (*cont)
	{
		if (*cont != '\n')
			++sym;
		if (*cont != '#' && *cont != '.' && *cont != '\n')
			return (0);
		++cont;
	}
	return ((sym % 16 == 0) ? 1 : 0);
}

static int	count_hesh(char *content, int len)
{
    int		i;
    int		j;
    int		count;

    i = -1;
    j = 0;
    count = 0;
    while (++i < len)
    {
        j++;
        if (content[i] == '#')
            count++;
        if (j == 20)
        {
            if (count != 4)
                return (0);
            j = 0;
            count = 0;
            ++i;
        }
    }
    return (1);
}

static int	count_touching(char *cont, int len)
{
    int		i;
    int		j;
    int		touch;

    i = -1;
    j = 0;
    touch = 0;
    while ((++i < len) && (++j <=20))
    {
        (cont[i] == '#' && j > 1 && cont[i - 1] == '#') ? touch++ : touch;
		(cont[i] == '#' && j < 19 && cont[i + 1] == '#') ? touch++ : touch;
		(cont[i] == '#' && j > 5 && cont[i - 5] == '#') ? touch++ : touch;
		(cont[i] == '#' && j < 15 && cont[i + 5] == '#') ? touch++ : touch;
        if (j == 20)
        {
            if (touch != 6 && touch != 8)
                return (0);
            j = 0;
            touch = 0;
            ++i;
        }
    }
    return (1);
}

int     validation(int fd)
{
    int     len;
    char    file_read[MAXFILE];
    char    *cont;
	char	*tmp;

    len = read(fd, file_read, MAXFILE);
	file_read[len + 1] = '\0';
    cont = ft_strnew(len);
	tmp = cont;
    cont = ft_strsub(file_read, 0, len);
	free(tmp);
    if (!(check_newline(cont, len)) || !(check_other(cont))
		|| !(count_hesh(cont, len)) || !(count_touching(cont, len)))
	{
		free(cont);
		ft_putendl("error");
		return (0);
	}
	parse_maps(cont);
	fillit(cont);
	free(cont);
    return (0);
}
