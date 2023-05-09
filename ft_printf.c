/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkwasny <kkwasny@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:17:07 by kkwasny           #+#    #+#             */
/*   Updated: 2023/05/09 13:02:35 by kkwasny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversions(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_putchar(va_arg(args, int));
	else if (format == 's')
		print_length += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		print_length += ft_putpointer(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_length += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_putunsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_length += ft_puthex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_length += ft_putchar('%');
	return (print_length);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			print_length += ft_conversions(args, s[i + 1]);
			i++;
		}
		else
			print_length += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}
