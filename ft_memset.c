/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:42:06 by smurayam          #+#    #+#             */
/*   Updated: 2024/11/03 15:35:29 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}

int	main(void)
{
	char	buffer[10] = "aaa";

	printf("%s\n", (char *)ft_memset(buffer, 'b', 2));
	return (0);
}

// ok(or try again main)

// void	*ft_memset(void *s, int c, unsigned int n)
// {
// 	unsigned int	i;
// 	unsigned char	*ptr;

// 	i = 0;
// 	ptr = (unsigned char *)s;
// 	while (i < n)
// 	{
// 		ptr[i] = (unsigned char)c;
// 		i++;
// 	}
// 	return (s);
// }

// #include <stdio.h>

// int	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// int	main(void)
// {
// 	char str[] = "i ate pudding";
// 	unsigned int len = ft_strlen(str);
// 	printf("%u\n", len);
// 	return (0);
// }