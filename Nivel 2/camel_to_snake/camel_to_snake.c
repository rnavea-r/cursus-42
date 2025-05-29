/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 20:00:49 by rnavea-r          #+#    #+#             */
/*   Updated: 2025/05/29 18:31:19 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void camel_to_snake(char *s)
{
    while (*s)
    {
        if (*s >= 'A' && *s <= 'Z')
            {
            *s = *s + 32;
        write(1, "_", 1);
            }
        write(1, s, 1);
        s++;
    }
}

int main (int argc, char **argv)
{
    if (argc == 2)
        camel_to_snake(argv[1]);
    write(1, "\n", 1);
}