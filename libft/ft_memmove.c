/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:25:02 by rnavea-r          #+#    #+#             */
/*   Updated: 2024/12/21 14:28:35 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest & !src)
		return (NULL);
	if (d > s)
		while (n --)
			d[n] = s[n];
	else
		while (n --)
			*d++ = *s++;
	return (dest);
}

/*int	main(void)
{
    char str1[] = "hello campus";
    char dest1[20];

    ft_memmove(dest1, str1, strlen(str1) + 1);
    printf("test 1 (copy simple): %s\n", dest1);
	
	char str2[] = "hello campus";
	ft_memmove(str2 + 6, str2, 6);
	printf("test 2 (overlapping) %s\n", str2);
    return 0;
}*/