/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 04:08:57 by mestefan          #+#    #+#             */
/*   Updated: 2023/11/20 04:09:00 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"
/*
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int	main(void)
{
	char	dest[20] = "Hello";
	
	const char	*src = "Bye";
	
	size_t	size = 4;
	
	printf("Before strlcpy: %s\n", dest);
	
	size_t	result = ft_strlcpy(dest, src, size);
	printf("after strlcpy %s\n", dest);
	printf("return value: %zu\n", result);
	
	return (0);
}
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}
