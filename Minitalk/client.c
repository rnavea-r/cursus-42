/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 19:28:16 by rnavea-r          #+#    #+#             */
/*   Updated: 2025/08/05 22:46:17 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	send_signal(int pid, int bit)
{
	if (bit)
		kill(pid, SIGUSR1);
	else
		kill(pid, SIGUSR2);
	usleep(500);
}

static void	send_char(int pid, unsigned char c)
{
	int	bit;

	bit = 7;
	while (bit >= 0)
	{
		send_signal(pid, (c >> bit) & 1);
		bit--;
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	if (argc != 3)
	{
		ft_putstr_fd("error: ./client [PID] [mensaje]\n", 2);
		return (1);
	}
	pid = ft_atoi(argv[1]);
	if (pid <= 0)
	{
		ft_putstr_fd("error: PID incorrect\n", 2);
		return (1);
	}
	i = 0;
	while (argv[2][i])
	{
		send_char(pid, argv[2][i]);
		i++;
	}
	send_char(pid, '\0');
	return (0);
}
