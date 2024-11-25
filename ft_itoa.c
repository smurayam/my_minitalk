/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 03:35:50 by smurayam          #+#    #+#             */
/*   Updated: 2024/11/25 01:06:28 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// 数字からascii putnbr出力だけ違う
int	check_digit(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
char	*ft_itoa(int n)
{
	int		i;
	char	*ptr;

	i = check_digit(n);
	ptr = malloc(i + 1);
	if(!ptr)
		return NULL;
	if(n==0)
	{
		ptr[0] = '0';
		return ptr;
	}
	if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
	while (i > 0)
	{
		ptr[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	ptr[check_digit(n)] = 0;
	return (ptr);
}

// int	main(void)
// {
// 	int n = 123;
// 	printf("%d\n", n);
// 	printf("%s\n", ft_itoa(n));
// 	return (0);
// }