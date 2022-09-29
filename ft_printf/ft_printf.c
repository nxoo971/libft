/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nxoo <nxoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 01:29:09 by nxoo              #+#    #+#             */
/*   Updated: 2022/09/29 21:52:47 by nxoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	init_tfunc(t_func (*ptr)[SIZEFUNC])
{
	(*ptr)[0].func = (void *)&flag_c;
	(*ptr)[0].c = 'c';
	(*ptr)[1].func = (void *)&flag_s;
	(*ptr)[1].c = 's';
	(*ptr)[2].func = (void *)&flag_d;
	(*ptr)[2].c = 'd';
	(*ptr)[3].func = (void *)&flag_x;
	(*ptr)[3].c = 'x';
	(*ptr)[4].func = (void *)&flag_bigx;
	(*ptr)[4].c = 'X';
	(*ptr)[5].func = (void *)&flag_u;
	(*ptr)[5].c = 'u';
	(*ptr)[6].func = (void *)&flag_p;
	(*ptr)[6].c = 'p';
	(*ptr)[7].func = (void *)&flag_i;
	(*ptr)[7].c = 'i';
	(*ptr)[SIZEFUNC - 1].func = 0;
	(*ptr)[SIZEFUNC - 1].c = -1;
}

int	index_of_key(t_func ptr[SIZEFUNC], char c)
{
	int	i;

	i = 0;
	while (ptr[i].c != -1)
	{
		if (ptr[i].c == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	t_func	ptr[SIZEFUNC];
	va_list	args_infos;
	int		indexof;
	int		len;
	int		i;

	i = 0;
	len = 0;
	indexof = -1;
	init_tfunc(&ptr);
	va_start(args_infos, format);
	while (format[i])
	{
		while (format[i] && format[i] != '%')
		{
			ft_putchar_fd(format[i++], 1);
			len++;
		}
		if (!format[i])
			break ;
		++i;
		if (format[i] == '%')
			flag_c('%', &len);
		else
		{
			indexof = index_of_key(ptr, format[i]);
			if (indexof >= 0)
				ptr[indexof].func(va_arg(args_infos, void *), &len);
		}
		i++;
	}
	va_end(args_infos);
	return (len);
}
