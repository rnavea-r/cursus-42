/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 17:54:49 by rnavea-r          #+#    #+#             */
/*   Updated: 2024/12/22 23:50:18 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Convierte un string numérico en un entero (int).

static int	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r');
}

int	ft_atoi(const char *nptr)
{
	int				i;
	int				atoi;
	int				sign;

	i = 0;
	sign = 1;
	atoi = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' && nptr[i + 1] != '-')
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		atoi *= 10;
		atoi += nptr[i] - 48;
		i++;
	}
	return (atoi * sign);
}

/*int	main(void)
{
	char	number[] = "-863";

	printf("%d\n", ft_atoi(number));
	return (0);
}*/
