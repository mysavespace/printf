/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkwasny <kkwasny@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:00:31 by kkwasny           #+#    #+#             */
/*   Updated: 2023/05/09 13:03:01 by kkwasny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		count;

	count = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		count += ft_putchar('-');
	}
	if (n < 10)
		count += ft_putchar(n + '0');
	else
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}
	return (count);
}
