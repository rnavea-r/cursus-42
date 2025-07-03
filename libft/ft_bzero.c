/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:02:38 by rnavea-r          #+#    #+#             */
/*   Updated: 2024/12/11 20:43:40 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	char			*ptr;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*int	main(void)
{
	char	ptr1[15] = "campus 42";
	int		i = 0;

	printf ("before of bzero: %s\n", ptr1);
	ft_bzero(ptr1, 3);
	printf ("after of bzero: %s", ptr1);
	while (i < 15)
	{
		if (ptr1[i] == 0)
		printf("%c",ptr1[i]);
		else
		printf("%c", ptr1[i]);
		i++;
	}
	return (0);
}*/
