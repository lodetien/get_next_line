/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsondag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 19:48:41 by nsondag           #+#    #+#             */
/*   Updated: 2018/07/16 21:13:46 by nsondag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_sortint(int *tab, int begin, int end)
{
	int i;
	int j;

	j = end;
	i = begin;
	while (j > i)
	{
		i = begin;
		while (i < j - 1)
		{
			if (tab[i] > tab[i + 1])
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
		j--;
		i = begin;
	}
	return (&tab[0]);
}
