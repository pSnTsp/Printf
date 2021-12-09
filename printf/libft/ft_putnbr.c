/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos <psantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:00:29 by psantos           #+#    #+#             */
/*   Updated: 2021/12/03 13:00:31 by psantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	int	charcount;

	charcount = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	else
	{
		if (n < 0)
		{
			charcount += ft_putchar('-');
			n = n * -1;
		}
		if (n > 9)
			charcount += ft_putnbr(n / 10);
		charcount += ft_putchar((n % 10) + '0');
	}
	return (charcount);
}
