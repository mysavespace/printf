/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkwasny <kkwasny@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:17:05 by kkwasny           #+#    #+#             */
/*   Updated: 2023/05/09 13:02:44 by kkwasny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_puthex(unsigned long nbr, char c);
int	ft_putnbr(int n);
int	ft_putpointer(unsigned long nbr);
int	ft_putstr(char *str);
int	ft_putunsigned(unsigned int nbr);

#endif
