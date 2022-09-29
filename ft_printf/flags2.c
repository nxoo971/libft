/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nxoo <nxoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:46:32 by nxoo              #+#    #+#             */
/*   Updated: 2022/09/29 21:53:17 by nxoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	flag_x(unsigned int n, int *len)
{
	divide_n_apply_f2(n, HEXABASE, (void *)&put_x, len);
}

void	flag_bigx(unsigned int n, int *len)
{
	divide_n_apply_f2(n, HEXABASE, (void *)&put_bigx, len);
}

void	flag_u(unsigned int n, int *len)
{
	divide_n_apply_f2(n, DECBASE, (void *)&put_u, len);
}

void	flag_p(unsigned long int cptr, int *len)
{
	flag_s("0x", len);
	divide_n_apply_f2(cptr, HEXABASE, (void *)&put_p, len);
}
