/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:12:32 by rnavea-r          #+#    #+#             */
/*   Updated: 2025/03/27 17:07:28 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*free_buffers(char *temp, char *static_buffer)
{
	free(temp);
	free(static_buffer);
	return (NULL);
}

static char	*read_to_buffer(int fd, char *static_buffer)
{
	char	*temp;
	ssize_t	len;

	temp = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	len = 1;
	while (len > 0 && !ft_strchr(static_buffer, '\n'))
	{
		len = read(fd, temp, BUFFER_SIZE);
		if (len == -1)
			return (free_buffers(temp, static_buffer));
		temp[len] = '\0';
		static_buffer = ft_strjoin(static_buffer, temp);
		if (!static_buffer)
		{
			free(temp);
			return (NULL);
		}
	}
	free(temp);
	return (static_buffer);
}

static char	*extract_line(char *static_buffer)
{
	int		i;
	char	*line;

	i = 0;
	if (static_buffer[i] == 0)
		return (NULL);
	while (static_buffer[i] != '\n' && static_buffer[i])
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (static_buffer[i] && static_buffer[i] != '\n')
	{
		line[i] = static_buffer[i];
		i++;
	}
	if (static_buffer[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*remove_line(char *static_buffer)
{
	int		i;
	int		count;
	char	*new_buff;

	i = 0;
	while (static_buffer[i] && static_buffer[i] != '\n')
		i++;
	if (!static_buffer[i])
	{
		free(static_buffer);
		return (NULL);
	}
	new_buff = (char *)malloc(sizeof(char) * (ft_strlen(static_buffer) - i
				+ 1));
	if (!new_buff)
		return (NULL);
	i++;
	count = 0;
	while (static_buffer[i])
		new_buff[count++] = static_buffer[i++];
	new_buff[count] = '\0';
	free(static_buffer);
	return (new_buff);
}

char	*get_next_line(int fd)
{
	static char	*str = NULL;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		free(str);
		str = (NULL);
		return (NULL);
	}
	str = read_to_buffer(fd, str);
	if (!str)
		return (NULL);
	line = extract_line(str);
	str = remove_line(str);
	return (line);
}
