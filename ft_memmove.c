/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooxn <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:31:46 by ooxn              #+#    #+#             */
/*   Updated: 2022/09/07 21:31:47 by ooxn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*s2;

	if (!dst && !src)
		return (NULL);
	s1 = (char *)dst;
	s2 = (char *)src;
	while (len-- > 0)
		*(s1 + len) = *(s2 + len);
	return (dst);
}
