/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:16:42 by rnavea-r          #+#    #+#             */
/*   Updated: 2024/12/19 17:20:30 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*int	main(void)
{
	printf ("ALFABETICO = 1 : NO ALFABETICO = 0 : %d\n", ft_isalpha('2'));
	printf ("ALFABETICO = 1 : NO ALFABETICO = 0 : %d\n", ft_isalpha('A'));
	printf ("ALFABETICO = 1 : NO ALFABETICO = 0 : %d\n", ft_isalpha('w'));
	return (0);
}*/
