/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 03:23:27 by nnnya             #+#    #+#             */
/*   Updated: 2025/12/24 00:17:12 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	g_server_sig;

int	send_str(char *str, int pid)
{
	int	i;

	while (*str != 0)
	{
		i = 7;
		while (i >= 0)
		{
			if (*str & (1 << i))
				kill(pid, SIGUSR2) else kill(pid, SIGUSR1);
			while (!g_server_sig)
				;
			g_server_sig = 0;
			i--;
		}
		str++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_printf("Usage: %s <Server PID> <Stinrg to send>\n");
		return (1);
	}
	signal(SIGUSR)
}
