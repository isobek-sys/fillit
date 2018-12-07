/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladuhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:53:00 by vladuhin          #+#    #+#             */
/*   Updated: 2018/12/03 18:53:04 by vladuhin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int     check_symbols(char *content)
{
    if (*content == '\0')
        return (0);
    while(*content != '\0')
    {
        if (*content != '.' && *content != '#' && *content != '\n')
            return (0);
        content++;
    }
    return (1);
}

int     check_newline(char *content, int len)
{
    int i;
    int j;

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

int     check_other(char *content,  int len)
{
    char *other;
    int i;
    int j;
    
    i = 0;
    j = 0;
    other = (char*)malloc(sizeof(char) * (len + 1));
    while(content[j] != '\0')
    {
        if (content[j] != '\n')
        {
            other[i] = content[j];
            j++;
            i++;
        }
        else
            j++;
    }
    if (ft_strlen(other) % 16 != 0)
        return (0);
    free(other);
    return (1);
}

int     count_hesh(char *content, int len)
{
    int i;
    int j;
    int count;

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

int     count_touching(char *cont, int len)
{
    int i;
    int j;
    int touch;

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

    len = read(fd, file_read, MAXFILE);
    cont = (char*)malloc(sizeof(char) * (len + 1));
    cont = ft_strsub(file_read, 0, len);
    cont[len] = '\0';
    if (!(check_symbols(cont)) || !(check_newline(cont, len)) 
        || !(check_other(cont, len)) || !(count_hesh(cont, len)) 
        || !(count_touching(cont, len)))
        exit(EXIT_FAILURE);
    printf("%s", cont);
    return (0);
}