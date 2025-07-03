/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:45:08 by rnavea-r          #+#    #+#             */
/*   Updated: 2025/02/13 23:45:19 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_pf(char c)
{
	return (write(1, &c, 1));
}

int	ft_putnbr_pf(long long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar_pf('-');
		n = -n;
	}
	if (n > 9)
	{
		count += ft_putnbr_pf(n / 10);
	}
	count += ft_putchar_pf(n % 10 + '0');
	return (count);
}

int	ft_putstr_pf(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (write (1, "(null)", 6));
	while (str[i] != '\0')
		write(1, &str[i++], 1);
	return (i);
}
