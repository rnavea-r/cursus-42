/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:55:02 by rnavea-r          #+#    #+#             */
/*   Updated: 2024/12/19 17:57:02 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//BUSCA UN CARACTER EN UNA CADENA, SI LO ENCUENTRA, DEVUELVE UN PUNTERO.

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	cc;

	i = 0;
	cc = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}

/*int main (void)
{
	const char	s[] = "hola campus 42";
	char	c = 'o';

	char *result = ft_strchr(s, c);
	if (result != NULL)
	{
		printf("char found: '%c' in the position %ld\n", c, result -s);
		printf("string from that point: %s\n", result);
	}
	else
	{
		printf("char '%c' not found", c);
	}
	return (0);
}*/
