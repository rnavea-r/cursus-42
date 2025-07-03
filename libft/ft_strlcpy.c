/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 19:51:01 by rnavea-r          #+#    #+#             */
/*   Updated: 2024/12/19 17:47:27 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//COPIA UNA CADENA DE TEXTO A OTRA SIN QUE SOBREPASE EL TAMAÑO DEL ESPACIO
//DEL DEST. TERMINA CON \0.

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			len;
	unsigned char	*d;
	const char		*s;

	i = 0;
	d = (unsigned char *)dst;
	s = (const char *)src;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (s[i] && i < size - 1)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (len);
}

/*int main(void) 
{
    char src[] = "Hola, campus 42!";
	char dst[20];

    size_t result = ft_strlcpy(dst, src, sizeof(dst));

    printf("source: %s\n", src);
    printf("destination(copied): %s\n", dst);
    printf("Length of the source (returned): %zu\n", result);

    return 0;
}*/
