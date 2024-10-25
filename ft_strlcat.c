/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:48:30 by smurayam          #+#    #+#             */
/*   Updated: 2024/10/24 02:43:40 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_strlcat(char *dst, const char *src, size_t size)
// {
// }

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char		dst[] = "aaaaa";
	const char	*src = "bbbbb";
	size_t		size;

	size = 6;
	printf("%d\n", strlcat(dst, src, size));
	return (0);
}
