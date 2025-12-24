/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 23:13:44 by smurayam          #+#    #+#             */
/*   Updated: 2025/02/02 23:14:22 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_utoa(unsigned int n);

int	ft_printf_unsigned(unsigned int ui)
{
	char	*c;
	int		i;

	i = 0;
	c = ft_utoa(ui);
	if (!c)
		return (0);
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
	free(c);
	return (i);
}
// int	main(void)
// {
// 	unsigned int ui = 13;

// 	printf("honke : %u\n", ui);
// 	ft_printf_unsigned(ui);
// 	return (0);
// }