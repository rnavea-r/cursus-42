/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 18:14:45 by rnavea-r          #+#    #+#             */
/*   Updated: 2025/06/23 18:35:44 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max(int *tab, unsigned int len)
{
    int             max_val;
    unsigned int    i = 0;
    
    if (len == 0)
        return 0;
        
    max_val = tab[0];
    while (i < len)
    {
        if (tab[i] > max_val)
            max_val = tab[i];
        i++;
    }
    return (max_val);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	int s[] = {2, 5, 6, 7, 9};
	printf("%d\n", max(s, 5));
}
*/