/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwleong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:42:01 by wlwleong          #+#    #+#             */
/*   Updated: 2022/02/20 00:40:07 by wlwleong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_char_count(int flag)
{
	static int	count;

	if (flag == 1)
		count++;
	else if (flag == 2)
		count = 0;
	return (count);
}
