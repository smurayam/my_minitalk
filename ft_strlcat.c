/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:11:02 by smurayam          #+#    #+#             */
/*   Updated: 2024/10/29 20:00:11 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	original_dst_len;

	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] != 0 && dst_len < size)
		dst_len++;
	original_dst_len = dst_len;
	while (src[src_len] != 0)
		src_len++;
	if (dst_len == size)
		return (size + src_len);
	while (*src != 0 && dst_len < size - 1)
	{
		dst[dst_len] = *src;
		dst_len++;
		src++;
	}
	dst[dst_len] = 0;
	return (original_dst_len + src_len);
}
#include <stdio.h>

int	main(void)
{
	char	buffer[10] = "aaa";

	printf("%u\n", ft_strlcat(buffer, "bbb", 10));
	return (0);
}
