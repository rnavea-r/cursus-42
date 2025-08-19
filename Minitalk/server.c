/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 22:47:07 by rnavea-r          #+#    #+#             */
/*   Updated: 2025/08/05 22:49:11 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	handle_signal(int sig)
{
	static unsigned char	c = 0;
	static int				count_bits = 0;

	c = c << 1;
	if (sig == SIGUSR1)
		c = c | 1;
	count_bits++;
	if (count_bits == 8)
	{
		if (c == '\0')
			write(1, "\n", 1);
		else
			write(1, &c, 1);
		c = 0;
		count_bits = 0;
	}
}

int	main(void)
{
	ft_putstr_fd("Welcome to minitalk :D", 1);
	ft_putstr_fd("\nThe PID is: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_fd("\n", 1);
	signal(SIGUSR1, handle_signal);
	signal(SIGUSR2, handle_signal);
	while (1)
		pause();
	return (0);
}
