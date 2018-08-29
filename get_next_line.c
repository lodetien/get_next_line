/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodetien <lodetien@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 15:01:00 by lodetien          #+#    #+#             */
/*   Updated: 2018/08/29 14:53:47 by lodetien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	ft_newline(char *str, int fd)
{
	char	buff[BUFF_SIZE + 1];
	int		position;

	while ((position = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[position] = '\0';
		str = ft_strjoin (str, buff);
	}
	return (*str);
}

int	get_next_line(const int fd, char **line)
{
	static char	*str;
	int i;

	i = 0;
	if (fd < 0 || line == NULL || BUFF_SIZE < 1 || BUFF_SIZE > OPEN_MAX )
		return (-1);
	if  (!(str = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1))))
		return (-1);
	*str = ft_newline(str, fd);
	printf("%c", *str);
	return (0);
}
