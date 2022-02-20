/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwleong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:59:45 by wlwleong          #+#    #+#             */
/*   Updated: 2022/02/20 00:34:30 by wlwleong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_num(int format, va_list arg_ptr);

int	ft_printf(const char *in_str, ...)
{
	va_list	ap;
	int		i;

	va_start(ap, in_str);
	ft_char_count(2);
	i = -1;
	while (in_str[++i])
	{
		if (in_str[i] != '%')
			ft_putchar(in_str[i]);
		else
		{
			i++;
			if (in_str[i] == 's')
				ft_putstr(va_arg(ap, char *));
			else if (in_str[i] == 'c')
				ft_putchar(va_arg(ap, int));
			else if (in_str[i] == '%')
				ft_putchar('%');
			else
				ft_printf_num(in_str[i], ap);
		}
	}
	va_end(ap);
	return (ft_char_count(0));
}

static void	ft_printf_num(int format, va_list arg_ptr)
{
	int	s_num;

	if (format == 'd' || format == 'i' || format == 'u')
	{
		s_num = va_arg(arg_ptr, int);
		if (format == 'u')
			ft_putnbr_base((unsigned int)s_num, 10, BASE10);
		else if (s_num < 0)
		{
			ft_putchar('-');
			ft_putnbr_base((unsigned int)(-s_num), 10, BASE10);
		}
		else
			ft_putnbr_base(s_num, 10, BASE10);
	}
	else if (format == 'x')
		ft_putnbr_base(va_arg(arg_ptr, unsigned int), 16, BASE16_L);
	else if (format == 'X')
		ft_putnbr_base(va_arg(arg_ptr, unsigned int), 16, BASE16_U);
	else if (format == 'p')
	{
		ft_putstr("0x");
		ft_putnbr_base(va_arg(arg_ptr, unsigned long int), 16, BASE16_L);
	}
}
