/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 22:38:56 by rnavea-r          #+#    #+#             */
/*   Updated: 2025/03/25 20:02:13 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd); // Función principal
char	*ft_strjoin(char *s1, char *s2); // Para unir strings
size_t	ft_strlen(const char *s); // Medir longitud de strings
char	*ft_strchr(const char *s, int c); // Busca falto de línea

#endif