/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooxn <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:25:36 by ooxn              #+#    #+#             */
/*   Updated: 2022/09/07 21:25:38 by ooxn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**res;
	int			size;
	int			start;
	int			i;

	if (!s)
		return (NULL);
	size = count_word(s, c);
	res = malloc((size + 1) * sizeof(char **));
	if (!res)
		return (res);
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (!(*res++ = ft_substr(s, start, i++)))
			return (NULL);
	}
	*res = 0;
	return (res - size);
}
