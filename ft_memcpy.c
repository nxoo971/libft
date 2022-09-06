/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooxn <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:14:15 by ooxn              #+#    #+#             */
/*   Updated: 2022/09/06 20:14:16 by ooxn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*copydst;
	char	*copysrc;

	copydst = (char *)dst;
	copysrc = (char *)src;
	while (n-- > 0)
		*copydst++ = *copysrc++;
	return (dst);
}
