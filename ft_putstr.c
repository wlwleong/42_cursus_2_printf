/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwleong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:31:50 by wlwleong          #+#    #+#             */
/*   Updated: 2022/02/19 17:33:23 by wlwleong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s)
{
	unsigned int	index;

	if (s)
	{
		index = 0;
		while (s[index] != '\0')
			ft_putchar(s[index++]);
	}
	else
		ft_putstr("(null)");
}
