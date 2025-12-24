/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_decimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 00:40:10 by smurayam          #+#    #+#             */
/*   Updated: 2025/03/19 12:35:18 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void	ft_itoa_super(int n, char *str);

ssize_t	ft_print_decimal(int n)
{
	char	str[12];
	ssize_t	ret;

	ft_itoa_super(n, str);
	ret = write(1, str, ft_strlen(str));
	return (ret);
}

void	ft_itoa_super(int n, char *str)
{
	char			buf[12];
	size_t			i;
	unsigned int	abs;

	if (!str)
		return ;
	i = 11;
	buf[i] = 0;
	if (n >= 0)
		abs = (unsigned int)n;
	else
		abs = (unsigned int)(-1 * n);
	while (--i)
	{
		buf[i] = (abs % 10) + '0';
		abs /= 10;
		if (!abs)
			break ;
	}
	if (n < 0)
		buf[--i] = '-';
	ft_strlcpy(str, &buf[i], 12 - i);
}
// while(--i)て最初からーーされる
// これなら条件のiと｛｝のiが一緒、size_tのときだけきつける

// int	main(void)
// {
// }