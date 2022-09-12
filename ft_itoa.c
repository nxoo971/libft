/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooxn <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 22:10:53 by ooxn              #+#    #+#             */
/*   Updated: 2022/09/11 22:10:54 by ooxn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len_n(int n)
{
	size_t			count;
	unsigned int	nb;

	count = 0;
	nb = n;
	if (n < 0)
	{
		count = 1;
		nb = n * -1;
	}
	while (nb >= 10)
	{
		count++;
		nb /= 10;
	}
	return (count + 1);
}

void	ft_putnbr(int n, char **res, int pos)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		nb = n * -1;
		(*res)[0] = '-';
	}
	if (nb >= 10)
		ft_putnbr(nb / 10, res, pos - 1);
	(*res)[pos] = nb % 10 + '0';
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*res;

	len = len_n(n);
	res = malloc(len + 1);
	if (!res)
		return (res);
	res[len] = 0;
	ft_putnbr(n, &res, len - 1);
	return (res);
}
