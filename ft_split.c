/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooxn <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:14:09 by ooxn              #+#    #+#             */
/*   Updated: 2022/09/11 16:14:12 by ooxn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void    *allocate(size_t size)
{
	void	*area;

	area = malloc(size);
	return (area);
}
 
char	**ft_subsplit(char const *str, char c, int *counter, int known)
{
	char	**res;
	char	*scan;
	char	*start;
	int		count;
	int		size;

	res = NULL;
	if (known)
		res = allocate((*counter + 1) * sizeof(char **));
	count = 0;
	scan = (char *)str;
	while (*scan)
	{
		while (*scan == c)
			scan++;
		start = scan;
		while (*scan != c && *scan != '\0')
			scan++;
		size = scan - start;
		if (size)
		{
			if (known)
			{
				res[count] = allocate(size + 1);
				strncpy(res[count], start, size);
				res[count][size] = '\0';
			}
			count++;
		}
	}
	*counter = count;
	return (res);
}*/

static void	*ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
	s = NULL;
	return (NULL);
}

static int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (c == 0)
		return (1);
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

static char	*ft_strsub(char const *str, unsigned int start, unsigned int end)
{
	char		*res;
	char		*s;
	size_t		size;
	int			i;

	size = end - start;
	res = malloc(size + 1);
	if (!res)
		return (res);
	s = (char *)str + start;
	i = 0;
	while (*s && end-- > start)
		res[i++] = *s++;
	res[i] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char		**res;
	int			size;
	int			start;
	int			i;
	int			index;

	if (!s)
		return (NULL);
	size = count_word(s, c);
	res = malloc((size + 1) * sizeof(char **));
	if (!res)
		return (res);
	res[size] = 0;
	i = 0;
	index = 0;
	if (c != (char)0)
	{
		while (s[i] != '\0')
		{
			while (s[i] != '\0' && s[i] == c)
				i++;
			if (s[i] == '\0')
				break ;
			start = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			res[index] = ft_strsub(s, start, i++);
			if (!res[index])
				return (ft_free(res));
			index++;
		}
	}
	else
	{
		res[0] = ft_strdup(s);
		if (!res[0])
			return (ft_free(res));
	}
	return (res);
}
