/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:26:22 by smurayam          #+#    #+#             */
/*   Updated: 2024/10/25 18:47:54 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strnstr(const char *big, const char *little, unsigned int len)
{
	unsigned int	i;

	i = 0;
	while (big[i] == little[i] && i < len && little[i] != 0)
	{
		i++;
		printf("%c\n", big[i]);
	}
	if (little[i] == 0)
		return (big[0]);
	else
		return (0);
}

int	main(void)
{
	printf("%c\n", ft_strnstr("aaabba", "bb", 6));
	return (0);
}