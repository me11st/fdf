/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 00:27:18 by mestefan          #+#    #+#             */
/*   Updated: 2023/11/20 00:27:21 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
/*
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(void)
{
	const char *str1 = "Hello";
	int	c = 'b';

    size_t size = 5;

    const void *result = ft_memchr(str1, c, size);
	if (result != 0)
	{
		printf("'%c' found at byte indx %zu\n", c, (const char *)result - str1);
	}
	else 
	{
		printf("'%c' not found in the first %zu bytes\n", c, size);
	}
    return 0;
}
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			return ((void *)((unsigned char *)s + i));
		}
		i++;
	}
	return (NULL);
}
