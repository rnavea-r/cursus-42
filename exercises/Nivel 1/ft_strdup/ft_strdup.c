/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 20:13:46 by rnavea-r          #+#    #+#             */
/*   Updated: 2025/06/17 21:03:07 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *s)
{
    int i = 0;

    while (s[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    int i = 0;
    char *dup;
    
    dup = malloc(ft_strlen(src) + 1);
    
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    
    dup[i] = '\0';
    return (dup);
}