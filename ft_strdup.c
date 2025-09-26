/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnnya <nnnya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 23:43:21 by smurayam          #+#    #+#             */
/*   Updated: 2025/09/26 17:36:24 by nnnya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strlen(const char *s);
char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	i;
	size_t	len;

	len = ft_strlen(s) + 1;
	ptr = malloc(len);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}

// int	main(void)
// {
// 	char	str[5] = "base";
// 	char	*dup_str;

// 	dup_str = ft_strdup(str);
// 	printf("str_ptr:%p\n", str);
// 	printf("str_str:%s\n", str);
// 	printf("dup_str:%p\n", dup_str);
// 	printf("dup_str:%s\n", dup_str);
// 	free(dup_str);
// 	return (0);
// }