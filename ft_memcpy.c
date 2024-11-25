/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:42:32 by smurayam          #+#    #+#             */
/*   Updated: 2024/11/25 01:08:09 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*new_dest;
	const unsigned char	*new_src;
	size_t				i;

	new_dest = (unsigned char *)dest;
	new_src = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		new_dest[i] = new_src[i];
		i++;
	}
	return (new_dest);
}

// int	main(void)
// {
// 	const char	src[] = "iiiii";
// 	const char	src1[] = "iiiii";
// 	char		dest[] = "aaaaa";
// 	char		dest1[] = "aaaaa";

// 	printf("before ft_memcpy:%s\n", dest);
// 	printf("before memcpy:%s\n", dest1);
// 	ft_memcpy(dest, src, 3);
// 	memcpy(dest1, src1, 3);
// 	printf("after ft_memcpy:%s\n", dest);
// 	printf("after memcpy:%s\n", dest1);
// 	return (0);
// }

// void	*ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	size_t i;
// 	unsigned char *d = (unsigned char *)dest;
// 	const unsigned char *s = (const unsigned char *)src;
// 	i = 0;

// 	while (i < n)
// 	{
// 		d[i] = s[i];
// 		i++;
// 	}
// 	return (dest);
// }