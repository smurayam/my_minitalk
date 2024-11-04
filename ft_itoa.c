/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 03:35:50 by smurayam          #+#    #+#             */
/*   Updated: 2024/11/05 04:40:07 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	number_of_n(n)
{
	int	i;

	i = 0;
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

	if (n < 0)
	{
		n *= -1;
	}
	ptr = malloc(number_of_n(n) + 1);
	i = 0;
	while (n != 0)
	{
		ptr[i] = n / 10;
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}

int	main(void)
{
	int n = 123;
	printf("%d\n", n);
	printf("%s\n", ft_itoa(n));
	return (0);
}