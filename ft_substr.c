/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooxn <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:48:57 by ooxn              #+#    #+#             */
/*   Updated: 2022/09/07 21:49:00 by ooxn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char		*res;
	int			i;

	if (start > len || !str)
		return (NULL);
	res = malloc((len - start) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (str[start] != '\0' && start + i < len)
	{
		res[i] = str[start + i];
		i++;
	}
	res[i] = 0;
	return (res);
}
