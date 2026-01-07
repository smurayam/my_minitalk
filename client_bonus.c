/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 21:11:39 by smurayam          #+#    #+#             */
/*   Updated: 2026/01/07 21:12:10 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	g_server_sig;

int	send_str(int pid, char *str)
{
	int	i;

	while (*str != 0)
	{
		i = 7;
		while (i >= 0)
		{
			if (*str & (1 << i))
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			while (!g_server_sig)
				;
			g_server_sig = 0;
			i--;
		}
		str++;
	}
	return (0);
}

void	handler(int sig)
{
	g_server_sig = sig;
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_printf("Usage: <Server PID> <Stinrg to send>\n");
		return (1);
	}
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	g_server_sig = 0;
	send_str(ft_atoi(av[1]), av[2]);
	return (0);
}
