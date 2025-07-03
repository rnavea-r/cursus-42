/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:48:07 by rnavea-r          #+#    #+#             */
/*   Updated: 2024/12/18 18:45:45 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	cc;

	i = ft_strlen(s);
	cc = (unsigned char)c;
	if (cc == '\0')
	{
		i = ft_strlen(s);
		return ((char *) s + i);
	}
	while (i >= 0)
	{
		if (s[i] == cc)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*int main (void)
{
	const char	s[] = "hola campus 42";
	char	c = 'a';
	char	*result;

	result = ft_strrchr(s, c);
	if (result != NULL)
	{
		printf("last char found: '%c' in the position %ld\n", c, result -s);
		printf("string from that point: %s\n", result);
	}
	else
	{
		printf("char '%c' not found", c);
	}
	return (0);
}*/
