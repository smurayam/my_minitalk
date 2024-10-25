/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 03:38:29 by smurayam          #+#    #+#             */
/*   Updated: 2024/10/24 09:30:04 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (i + 1 < size && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}

#include <stdio.h>

int	main(void)
{
	char		dst[10] = "aaaaa";
	const char	*src = "bbb";
	size_t		result;

	// printf("%zu\n", ft_strlcpy("aaaaa", "bbb", 7));
	result = ft_strlcpy(dst, src, 7);
	printf("%s\n", dst);
	printf("%zu\n", result);
	return (0);
}
