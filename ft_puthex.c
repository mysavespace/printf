/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkwasny <kkwasny@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:54:56 by kkwasny           #+#    #+#             */
/*   Updated: 2023/05/09 13:02:56 by kkwasny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long nbr, char c)
{
	char	*basehex;
	int		count;

	count = 0;
	if (c == 'x')
		basehex = "0123456789abcdef";
	else
		basehex = "0123456789ABCDEF";
	if (nbr < 16)
		count += ft_putchar(*(basehex + nbr));
	else
	{
		count += ft_puthex((nbr / 16), c);
		count += ft_puthex((nbr % 16), c);
	}
	return (count);
}
