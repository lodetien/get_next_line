/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorttab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsondag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 19:48:41 by nsondag           #+#    #+#             */
/*   Updated: 2018/07/12 14:26:28 by nsondag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_sorttab(char *tab)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(tab);
	while (j != i)
	{
		i = 0;
		while (i < j)
		{
			if (tab[i] < tab[i + 1])
				ft_swapchar(&tab[i], &tab[i + 1]);
			i++;
		}
		j--;
	}
	return (tab);
}
