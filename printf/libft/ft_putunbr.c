/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos <psantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:01:49 by psantos           #+#    #+#             */
/*   Updated: 2021/12/03 13:01:51 by psantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunbr(unsigned int n)
{
	int	charcount;

	charcount = 0;
	if (n > 9)
		charcount += ft_putunbr(n / 10);
	charcount += ft_putchar((n % 10) + '0');
	return (charcount);
}
