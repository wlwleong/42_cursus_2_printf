/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwleong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:59:45 by wlwleong          #+#    #+#             */
/*   Updated: 2022/02/18 22:58:38 by wlwleong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *in_str, ...)
{
	va_list	arg_ptr;
	int					i;
	char				*s_str;
	char				c_char;
	int					s_num;
	unsigned int		u_num;
	unsigned long int	addr;

	va_start(arg_ptr, in_str);
	i = 0;
	while (in_str[i])
	{
		if (in_str[i] != '%')
			ft_putchar(in_str[i]);
		else
		{
			i++;
			if (in_str[i] == 's')
			{
				s_str = va_arg(arg_ptr, char *);
				ft_putstr(s_str);
			}
			else if (in_str[i] == 'c')
			{
				c_char = va_arg(arg_ptr, int);
				ft_putchar(c_char);
			}
			else if (in_str[i] == 'd' || in_str[i] == 'i')
			{
				s_num = va_arg(arg_ptr, int);
				if (s_num < 0)
				{
					ft_putchar('-');
					ft_putnbr_base((unsigned int)(-s_num), 10, "0123456789");
				}
				else
					ft_putnbr_base(s_num, 10, "0123456789");
			}
			else if (in_str[i] == 'u')
			{
				s_num = va_arg(arg_ptr, int);
				ft_putnbr_base((unsigned int)s_num, 10, "0123456789");
			}
			else if (in_str[i] == 'x')
			{
				u_num = va_arg(arg_ptr, unsigned int);
				ft_putnbr_base(u_num, 16, "0123456789abcdef");
			}
			else if (in_str[i] == 'X')
			{
				u_num = va_arg(arg_ptr, unsigned int);
				ft_putnbr_base(u_num, 16, "0123456789ABCDEF");
			}
			else if (in_str[i] == 'p')
			{
				addr = va_arg(arg_ptr, unsigned long int);
				if (addr > 0)
				{
					ft_putstr("0x");
					ft_putnbr_base(addr, 16, "0123456789abcdef");
				}
				else
					ft_putstr("(nil)");
			}
			else if (in_str[i] == '%')
				ft_putchar('%');
			else
				ft_putstr("(unknown conversion)");
		}
		i++;
	}
	va_end(arg_ptr);
//	printf("\tLength : %d", ft_char_count(0));
//	ft_char_count(2);
	return (ft_char_count(0));
}