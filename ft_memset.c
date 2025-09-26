/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnnya <nnnya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:42:06 by smurayam          #+#    #+#             */
/*   Updated: 2025/09/26 17:57:56 by nnnya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	unsigned char *ptr;
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	char	s[] = "ooowao";
// 	char	t[] = "ooowao";
// 	int		c;
// 	size_t	n;

// 	c = 47;
// 	n = 3;
// 	printf("before:s:%s\n", s);
// 	printf("before:t:%s\n", t);
// 	ft_memset(s, c, n);
// 	memset(t, c, n);
// 	printf("after ft_memset:%s\n", s);
// 	printf("after memset:%s\n", t);
// 	return (0);
// }
// // when you treat memory, use unsigned char

// int	main(void)
// {
// 	char str[] = "i ate pudding";
// 	unsigned int len = ft_strlen(str);
// 	printf("%u\n", len);
// 	return (0);
// }