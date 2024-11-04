/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 06:39:15 by smurayam          #+#    #+#             */
/*   Updated: 2024/11/03 13:50:31 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (('a' <= (char)c && (char)c <= 'z') || ('A' <= (char)c
			&& (char)c <= 'Z'))
		return (1024);
	else
		return (0);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c;

	c = 'c';
	printf("%d\n", isalpha(c));
	printf("%d\n", ft_isalpha(c));
	return (0);
}
