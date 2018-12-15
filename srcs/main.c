/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 14:10:35 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/15 13:24:05 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(int argc, char **argv)
{
	int	fd;

	if (argc == 2 && (fd = open(argv[1], O_RDONLY)) > -1)
	{
		validation(fd);
		close(fd);
	}
	else
		ft_putendl("usage ./fillit file_name");
	return (0);
}
