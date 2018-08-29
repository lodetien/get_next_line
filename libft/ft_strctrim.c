/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strctrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsondag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 18:12:02 by nsondag           #+#    #+#             */
/*   Updated: 2018/07/03 18:52:49 by nsondag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strctrim(char const *s, char c)
{
	char	*dst;
	size_t	len;
	size_t	i;

	i = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	len = ft_strlen(s);
	if (i == len)
		return (NULL);
	while (s[len - 1] == c)
		len--;
	if (!(dst = ft_strnew(len - i)))
		return (NULL);
	dst = ft_strsub(s, i, len - i);
	dst[len - i + 1] = '\0';
	return (dst);
}
