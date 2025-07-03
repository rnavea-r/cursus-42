/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:42:52 by rnavea-r          #+#    #+#             */
/*   Updated: 2024/12/19 17:36:19 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (1);
	return (0);
}

/*int	main(void)
{
	printf ("RETURN: %d\n", ft_isascii('a'));
	printf ("RETURN: %d\n", ft_isascii (200));
	printf ("RETURN: %d\n", ft_isascii ('9'));
	return (0);
}*/
