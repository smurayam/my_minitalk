/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 22:29:27 by smurayam          #+#    #+#             */
/*   Updated: 2025/12/26 22:29:37 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	g_char_buf;

void	handler(int sig, siginfo_t *info, void *p)
{
	ssize_t	res;

	(void)p;
	g_char_buf <<= 1;
	if (sig == SIGUSR2)
		g_char_buf |= 1;
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
		pause();
	return (0);
}
