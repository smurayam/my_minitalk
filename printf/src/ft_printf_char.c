/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 19:21:31 by smurayam          #+#    #+#             */
/*   Updated: 2025/03/23 12:11:01 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_printf_char(int c)
{
	char	ch;
	int		ret;

	ch = c;
	ret = write(1, &ch, 1);
	return (ret);
}

// int	main(void)
// {
// 	int c = 'a';
// 	ft_printf_char(c);

// 	return (0);
// }