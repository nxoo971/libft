/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_displaydouble.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferradi <rferradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 16:49:46 by rferradi          #+#    #+#             */
/*   Updated: 2022/12/31 16:52:23 by rferradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_displaydouble(char **str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_printf("%s\n", str[i]);
}