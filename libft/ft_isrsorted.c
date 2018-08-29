/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isrsorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsondag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 00:18:26 by nsondag           #+#    #+#             */
/*   Updated: 2018/07/16 01:23:55 by nsondag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isrsorted(int *tab, size_t size)
{
	size_t i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] < tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}