/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 00:54:32 by smurayam          #+#    #+#             */
/*   Updated: 2024/11/25 01:01:44 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	write(fd, &n, 1);
}

// int	main(void)
// {
// 	ft_putnbr_fd('1', 1);
// 	ft_putnbr_fd('2', 2);
// 	return (0);
// }
