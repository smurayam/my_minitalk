/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnnya <nnnya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 19:46:31 by smurayam          #+#    #+#             */
/*   Updated: 2025/09/26 16:12:49 by nnnya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*point;
	size_t	total_size;

	total_size = nmemb * size;
	if (total_size == 0 || total_size / nmemb != size)
		return (NULL);
	point = malloc(total_size);
	if (point == NULL)
		return (NULL);
	ft_bzero(point, total_size);
	return (point);
}

// int	main(void)
// {
// 	size_t	nmemb;
// 	size_t	size;

// 	nmemb = 10;
// 	size = 4;
// 	printf("%p\n", ft_calloc(nmemb, size));
// 	printf("%p\n", calloc(nmemb, size));
// 	return (0);
// }
