/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:33:02 by rnavea-r          #+#    #+#             */
/*   Updated: 2025/02/13 23:43:42 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_convert(va_list va, const char *str)
{
	if (*str == 'c')
		return (ft_putchar_pf(va_arg(va, int)));
	if (*str == 's')
		return (ft_putstr_pf(va_arg(va, char *)));
	if (*str == 'p')
		return (ft_putptr_pf(va_arg(va, void *)));
	if (*str == 'i' || *str == 'd')
		return (ft_putnbr_pf(va_arg(va, int)));
	if (*str == 'u')
		return (ft_putnbr_pf(va_arg(va, unsigned int)));
	if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
			return (ft_puthex_pf(va_arg(va, unsigned int), "0123456789abcdef"));
		else
			return (ft_puthex_pf(va_arg(va, unsigned int), "0123456789ABCDEF"));
	}
	if (*str == '%')
		return (ft_putchar_pf('%'));
	return (0);
}

int	ft_printf(const char *str, ...)

{
	int		i;
	int		count;
	va_list	args;

	if (!str)
		return (0);
	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_convert(args, &str[i]);
		}
		else
			count += ft_putchar_pf(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
