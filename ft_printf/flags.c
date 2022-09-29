/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nxoo <nxoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 02:03:21 by nxoo              #+#    #+#             */
/*   Updated: 2022/09/29 21:53:13 by nxoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	flag_c(int c, int *len)
{
	ft_putchar_fd(c, 1);
	*len += 1;
}

void	flag_s(char *s, int *len)
{
	int	i;

	if (!s)
		s = "(null)";
	i = 0;
	while (s[i])
		i++;
	write(1, s, i);
	*len += i;
}

void	flag_d(int n, int *len)
{
	divide_n_apply_f(n, DECBASE, (void *)&put_d, len);
}

void	flag_i(int n, int *len)
{
	flag_d(n, len);
}
