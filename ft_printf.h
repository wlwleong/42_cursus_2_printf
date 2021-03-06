/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwleong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:43:36 by wlwleong          #+#    #+#             */
/*   Updated: 2022/02/20 00:27:18 by wlwleong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# define BASE10 "0123456789"
# define BASE16_U "0123456789ABCDEF"
# define BASE16_L "0123456789abcdef"

int	ft_printf(const char *in_str, ...);

#endif
