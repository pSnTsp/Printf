/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos <psantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:00:52 by psantos           #+#    #+#             */
/*   Updated: 2021/12/03 13:00:53 by psantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *s)
{
	int	index;
	int	charcount;

	index = 0;
	charcount = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[index] != '\0')
	{
		write(1, &s[index], 1);
		index++;
		charcount++;
	}
	return (charcount);
}
