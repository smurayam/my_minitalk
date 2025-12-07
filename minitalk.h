/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnnya <nnnya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 03:21:48 by nnnya             #+#    #+#             */
/*   Updated: 2025/12/08 04:44:06 by nnnya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "Libft01/libft.h"
# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_server
{
	int				bit;
	unsigned char	c;
}	t_server;

#endif