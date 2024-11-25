/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 00:22:07 by smurayam          #+#    #+#             */
/*   Updated: 2024/11/15 01:41:24 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int		ft_strlen(const char *s);

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	int i;
// 	i = 0;
// 	char	*ptr;
// 	while(s[i] != 0)
// 	{
// 		i ++;
// 	}
// 	return (ptr);
// }

// int	main(void)
// {
// 	char	s[] = "I am waking up";

// 	printf(s, 4, 6); // m wa
// 	return (0);
// }

#include <stdlib.h>

int		ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*ptr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		ptr = malloc(1);
		ptr[0] = 0;
		return (ptr);
	}
	if (len > s_len - start)
		len = s_len - start;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (len > i)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}


// why not "if (len > s_len)"