/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos <psantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:58:10 by psantos           #+#    #+#             */
/*   Updated: 2021/12/03 14:59:38 by psantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hexa(unsigned long n)
{
	int		letter;
	char	hexa;
	int		charcount;

	charcount = 0;
	letter = 97;
	if (n >= 16)
		charcount += ft_hexa(n / 16);
	hexa = n % 16;
	if (hexa > 9)
		charcount += ft_putchar(hexa - 10 + letter);
	else
		charcount += ft_putchar(hexa + 48);
	return (charcount);
}
