/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:41:19 by rnavea-r          #+#    #+#             */
/*   Updated: 2024/12/17 16:48:35 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//COPIA LO QUE QUEDA EN EL ESPACIO EN DEST. TERMINA CON \0
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dst);
	if (dstsize <= len)
		return (ft_strlen(src) + dstsize);
	while (src[i] && len + 1 < dstsize)
	{
		dst[len] = src[i];
		len++;
		i++;
	}
	dst[len] = '\0';
	return (ft_strlen(&src[i]) + len);
}
/*int main(void)
{
	char	dst[20] = "hola";
	const char	*src = " campus 42!";
	size_t	len;

	len = ft_strlcat(dst, src, sizeof(dst));
	printf("dst: %s\n", dst);
	printf("len: %zu\n", len);
	return (0);
}*/
