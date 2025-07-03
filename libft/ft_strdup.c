/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 00:27:20 by rnavea-r          #+#    #+#             */
/*   Updated: 2024/12/23 19:03:00 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Duplica una cadena (string) y devuelve un nuevo puntero para trabajar 
// con la copia.

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dst;

	dst = (char *) malloc(ft_strlen(s) + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}
/*
int	main(void)
{
	const char	*str = "happy christmas";
	char		*dupl;

	dupl = ft_strdup(str);
	if (!dupl)
	{
		printf("error: not duplicated");
		return (1);
	}
	printf("string origin: \"%s\"\n", dupl);
	printf("string dupl: \"%s\"\n", str);
	free(dupl);
	return (0);
}
*/