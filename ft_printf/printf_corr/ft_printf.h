/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:16:56 by rnavea-r          #+#    #+#             */
/*   Updated: 2025/02/13 23:45:43 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stddef.h>
# include <string.h>
# include <limits.h>

int	ft_printf(const char *str, ...);
int	ft_putchar_pf(char c);
int	ft_putnbr_pf(long long n);
int	ft_putstr_pf(char *str);
int	ft_puthex_pf(unsigned int n, char *base);
int	ft_putptr_pf(void *ptr);

#endif
