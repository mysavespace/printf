/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkwasny <kkwasny@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:56:33 by kkwasny           #+#    #+#             */
/*   Updated: 2023/05/09 13:03:07 by kkwasny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long nbr)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	count += ft_puthex(nbr, 'x');
	return (count);
}
