/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooxn <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:14:27 by ooxn              #+#    #+#             */
/*   Updated: 2022/09/06 20:14:28 by ooxn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*copy;
	unsigned char	ch;

	copy = (char *)b;
	ch = (unsigned char)c;
	while (len--)
		*copy++ = ch;
	return (b);
}
