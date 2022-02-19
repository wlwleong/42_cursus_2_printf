/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwleong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:43:36 by wlwleong          #+#    #+#             */
/*   Updated: 2022/02/19 23:22:37 by wlwleong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# define BASE10 "0123456789"
# define BASE16_U "0123456789ABCDEF"
# define BASE16_L "0123456789abcdef"

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr_base(unsigned long int nbr, int n_base, char *base);
int		ft_char_count(int flag);
int		ft_printf(const char *in_str, ...);

#endif
