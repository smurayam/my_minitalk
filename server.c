/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 03:22:25 by nnnya             #+#    #+#             */
/*   Updated: 2025/12/23 21:18:14 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <signal.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int		g_sig = 0;

void	make_char(void);

void	handler(int signal)
{
	g_sig = signal;
}

int	main(void)
{
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	printf("Server PID: %d\n", getpid());
	while (1)
	{
		usleep(100);
		// printf("...\n");
		if (g_sig != 0)
		{
			make_char();
			g_sig = 0;
		}
	}
	return (0);
}

void	make_char(void)
{
	static int idx;
	static char c = 0;

	c = c << 1;
	if (g_sig == SIGUSR1)
		c = (c + 0);
	if (g_sig == SIGUSR2)
		c = (c + 1);
	idx++;
	if (idx == 8)
	{
		write(STDOUT_FILENO, &c, 1);
		idx = 0;
	}
	return ;
}