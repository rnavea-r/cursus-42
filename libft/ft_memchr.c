/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:45:45 by rnavea-r          #+#    #+#             */
/*   Updated: 2024/12/20 17:58:26 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Busca el primer byte de valor c en los primeros n bytes de s y devuelve 
//un puntero a su posición o NULL. Le dices qué buscar, dónde y cuándo.

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	found_char;
	size_t			i;

	str = (unsigned char *)s;
	found_char = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == found_char)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	int	c = 'h';
	const char	s[] = "happy christmas";
	size_t	n = 20;
	char *result = (char *)ft_memchr(s, c, n);

	if (result)
		printf("char found: '%c' in: %ld\n", c, result - s);
	else
		printf("character '%c' not found", c);
	return (0);
}*/
