/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 03:23:27 by nnnya             #+#    #+#             */
/*   Updated: 2025/12/23 21:51:21 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	send_char(char c, pid_t srv_pid)
{
	unsigned char	bit_mask;
	int				idx;

	idx = 0;
	bit_mask = (unsigned char)128;
	while (idx < 8)
	{
		if ((c & bit_mask) == 0)
			kill(srv_pid, SIGUSR1);
		else if ((c & bit_mask) != 0)
			kill(srv_pid, SIGUSR2);
		bit_mask = bit_mask / 2;
		idx++;
		usleep(10000);
	}
	return (0);
}

int	send_str(char *str, pid_t srv_pid)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		send_char(str[i], srv_pid);
		i++;
	}
	send_char('\n', srv_pid);
	return (0);
}

int	main(int argc, char *av[])
{
	pid_t	srv_pid;

	(void)argc;
	srv_pid = ft_atoi(av[1]);
	send_str(av[2], srv_pid);
}
