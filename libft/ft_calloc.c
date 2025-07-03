/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 14:54:20 by rnavea-r          #+#    #+#             */
/*   Updated: 2024/12/22 17:52:22 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t				i;
	unsigned char		*ptr;

	i = 0;
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/*int	main(void)
{
	size_t	i;

	char	*ptr = ft_calloc(11, sizeof(char));
	i = 0;
	while (i < 11 && ptr[i] == '\0')
	{
		ptr[i] = 'i';
		i++;
	}
	printf("Result: %s\n", ptr);
	return (0);
}*/
