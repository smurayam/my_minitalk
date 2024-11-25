/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:44:38 by smurayam          #+#    #+#             */
/*   Updated: 2024/11/25 17:01:44 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		sub;

	i = 0;
	sub = (s1[i] - s2[i]);
	while (i < n && (s1[i] != 0 || s2[i] != 0))
	{
		if (sub != 0)
			return (sub);
		i++;
	}
	return (0);
}

int	main(void)
{
	const char	s1[] = "2222";
	const char	s2[] = "2222";
	size_t		n;

	n = 2;
	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
}

// int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < n && s1[i] == s2[i])
// 	{
// 		i++;
// 	}
// 	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_strncmp("aaab", "aaa", 4));
// 	return (0);
// }