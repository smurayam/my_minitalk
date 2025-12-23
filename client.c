/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 03:23:27 by nnnya             #+#    #+#             */
/*   Updated: 2025/12/23 21:18:15 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char *argv[])
{
	pid_t			srv_pid;
	char			c;
	int				idx;
	unsigned char	bit_mask;

	(void)argc;
	srv_pid = atoi(argv[1]);
	c = argv[2][0];
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
}
