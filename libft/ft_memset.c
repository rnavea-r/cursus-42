/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 18:16:57 by rnavea-r          #+#    #+#             */
/*   Updated: 2024/12/10 16:31:36 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
//rellena una zona de memoria con bytes especificos
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char	array[10] = {0};
	int		i = 0;

	ft_memset(array, 1, 5);
	while (i < 10)
	{
		printf("[%d]", array[i]);
		i++;
	}
	return (0);
}*/
