/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooxn <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:03:34 by ooxn              #+#    #+#             */
/*   Updated: 2022/09/06 22:03:35 by ooxn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		size;
	char    *s1;

	size = ft_strlen(s);
	s1 = (char *)s + size;
	while (size-- >= 0)
	{
		if (*s1-- == c)
			return (++s1);
	}
	return (NULL);
}
