/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:12:39 by smurayam          #+#    #+#             */
/*   Updated: 2024/11/03 13:52:06 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (('a' <= (char)c && (char)c <= 'z') || (('A' <= (char)c
				&& (char)c <= 'Z') && 0 < c && c < 9))
		return (1024);
	else
		return (0);
}
#include <stdio.h>

int	main(void)
{
	int c;

	c = 'c';
	printf("%d\n", ft_isalnum(c));
	return (0);
}