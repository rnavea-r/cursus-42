/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 17:45:58 by rnavea-r          #+#    #+#             */
/*   Updated: 2024/12/23 18:52:02 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
    char *str = "Hello campus 42";
    unsigned int start = 7;
    size_t len = 5;

    char *substr = ft_substr(str, start, len);
    if (substr)
    {
        printf("Subcadena: %s\n", substr);
        free(substr); // No olvides liberar la memoria
    }
    else
    {
        printf("Error al crear la subcadena.\n");
    }

    return 0;
}*/