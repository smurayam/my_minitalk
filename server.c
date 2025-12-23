/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 03:22:25 by nnnya             #+#    #+#             */
/*   Updated: 2025/12/24 00:17:13 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	g_char_buf;

void	handler(int sig, struct __siginfo *info, void *p)
{
	ssize_t	res;

	(void)p;
	g_char_buf = (g_char_buf << 1) | (sig - SIGUSR1);
	if (g_char_buf & (1 << 8))
	{
		res = write(1, &g_char_buf, 1);
		g_char_buf = 1;
		if (res == -1)
		{
			kill(info->si_pid, SIGUSR2);
			return ;
		}
	}
	kill(info->si_pid, SIGUSR1);
}

int	main(void)
{
	struct sigaction	act;

	g_char_buf = 1;
	ft_bzero(&act, sizeof(struct sigaction));
	act.sa_sigaction = handler;
	act.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	ft_printf("Server PID: %d\n", getpid());
	while (1)
		;
	return (0);
}
