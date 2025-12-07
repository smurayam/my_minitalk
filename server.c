/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnnya <nnnya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 03:22:25 by nnnya             #+#    #+#             */
/*   Updated: 2025/12/08 04:43:51 by nnnya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_server	g_data;

static void	handle_signal(int sig)
{
	if (sig == SIGUSR2)
		g_data.c |= (1 << g_data.bit);
	g_data.bit++;
	if (g_data.bit == 8)
	{
		(void)write(1, &g_data.c, 1);
		g_data.bit = 0;
		g_data.c = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;

	g_data.bit = 0;
	g_data.c = 0;
	(void)write(1, "Server PID: ", 12);
	/* libftの関数を使用 */
	ft_putnbr_fd(getpid(), 1);
	(void)write(1, "\n", 1);
	sa.sa_handler = handle_signal;
	sigemptyset(&sa.sa_mask);
	sigaddset(&sa.sa_mask, SIGUSR1);
	sigaddset(&sa.sa_mask, SIGUSR2);
	sa.sa_flags = 0;
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		return (1);
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
		return (1);
	while (1)
		pause();
	return (0);
}