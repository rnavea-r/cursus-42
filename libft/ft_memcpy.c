/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:07:03 by rnavea-r          #+#    #+#             */
/*   Updated: 2024/12/21 01:07:22 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	const char		*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (const char *)src;
	if (!dest & !src)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

/*int	main(void)
{
	char	orig[] = "campus 42";
	char	dest[20];

	printf ("origin: campus 42%s\n", dest);
	ft_memcpy(dest, orig, strlen(orig) +1);
	printf("copy to destination: %s\n", dest);
	return (0);
}*/
