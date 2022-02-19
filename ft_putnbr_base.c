/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwleong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:35:17 by wlwleong          #+#    #+#             */
/*   Updated: 2022/02/19 17:38:29 by wlwleong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned long int nbr, int n_base, char *base)
{
	if (nbr > (unsigned long int)(n_base - 1))
	{
		ft_putnbr_base(nbr / n_base, n_base, base);
		ft_putnbr_base(nbr % n_base, n_base, base);
	}
	else
		ft_putchar(base[nbr]);
}
