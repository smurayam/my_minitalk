/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 03:58:47 by smurayam          #+#    #+#             */
/*   Updated: 2024/11/02 04:45:22 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	char *ptr;
	int size_s1;
	int size_s2;
	int i;

	if (!s1 || !s2)
		return (NULL);

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);

	ptr = malloc(size_s1 + size_s2 + 1);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < size_s1)
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < size_s2)
	{
		ptr[size_s1 + i] = s2[i];
		i++;
	}
	ptr[size_s1 + size_s2] = '\0';

	return (ptr);
}