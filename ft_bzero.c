/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnnya <nnnya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:19:14 by smurayam          #+#    #+#             */
/*   Updated: 2025/09/26 17:55:51 by nnnya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
// void print_every_byte()
// int	main(void)
// {
// 	char	s[] = "nnnya";
// 	char	t[] = "nnnya";
// 	size_t	n;

// 	n = 2;
// 	printf("before:s:%s\n", s);
// 	printf("before:t:%s\n", t);
// 	ft_bzero(s, n);
// 	bzero(t, n);
// 	printf("after ft_bzero:%s\n", s);
// 	printf("after bzero:%s\n", t);
// 	return (0);
// }