/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsondag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 21:03:45 by nsondag           #+#    #+#             */
/*   Updated: 2018/07/12 16:19:10 by nsondag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_len(char *s, char c)
{
	size_t len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

static size_t	word_count(char *s, char c)
{
	size_t count;

	if (s == NULL)
		return (0);
	count = 0;
	while (*s != '\0')
	{
		while (*s != c && *s != '\0')
			s++;
		count++;
		while (*s == c && *s != '\0')
			s++;
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	char	*trim;
	char	**dst;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s)
		return (NULL);
	i = 0;
	trim = ft_strctrim(s, c);
	if (!(dst = (char**)malloc(sizeof(char*) * (word_count(trim, c) + 1))))
		return (NULL);
	while (trim)
	{
		j = 0;
		len = word_len(trim, c);
		if (!(dst[i] = ft_strnew(len)))
			return (NULL);
		while (j < len)
			dst[i][j++] = *trim++;
		i++;
		trim = ft_strctrim(trim, c);
	}
	dst[i] = NULL;
	return (dst);
}
