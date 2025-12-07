/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnnya <nnnya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 03:21:48 by nnnya             #+#    #+#             */
/*   Updated: 2025/12/08 04:27:52 by nnnya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

/* libft.h をインクルード */
# include "Libft01/libft.h"
# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

/*
** グローバル変数のための構造体（サーバー用）
*/
typedef struct s_server
{
	int				bit;
	unsigned char	c;
}	t_server;

#endif