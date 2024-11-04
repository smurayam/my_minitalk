/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 04:58:15 by smurayam          #+#    #+#             */
/*   Updated: 2024/11/02 07:07:25 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// i don't understand
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
int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	char *ptr;
	int i;

	if (!s1 || !set)
		return (NULL);

	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && is_in_set(s1[end], set))
		end--;

	i = 0;
	ptr = malloc(end - start + 2);
	if (!ptr)
		return (NULL);

	i = 0;
	while (start <= end)
		ptr[i++] = s1[start++];
	ptr[i] = 0;
	return (ptr);
}