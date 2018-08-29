/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodetien <lodetien@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 11:19:01 by lodetien          #+#    #+#             */
/*   Updated: 2018/08/16 11:20:54 by lodetien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(int argc, char *argv[])
{
	if (argc != 2) {
		ft_putendl("usage: ./a.out <filename>");
		return 0;
	}

	int fd = open(argv[1], O_RDONLY);
	char *line;

	while (get_next_line(fd, &line))
		ft_putendl(line);
	return 0;
}
