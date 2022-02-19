/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwleong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:43:36 by wlwleong          #+#    #+#             */
/*   Updated: 2022/02/19 17:46:25 by wlwleong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr_base(unsigned long int nbr, int n_base, char *base);
int     ft_char_count(int flag);
int     ft_printf(const char *in_str, ...);

#endif
