/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 20:02:17 by rnavea-r          #+#    #+#             */
/*   Updated: 2024/12/20 21:56:26 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Busca una subcadena (pedazo de texto) dentro de otra cadena más grande 
// solo en los primeros n caracteres. 

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	o;

	i = 0;
	o = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		o = 0;
		while (big[i + o] == little[o] && big[i + o] && (i + o) < len)
		{
			o++;
			if (little[o] == '\0')
				return ((char *) &big[i]);
		}
		++i;
	}
	return (0);
}
