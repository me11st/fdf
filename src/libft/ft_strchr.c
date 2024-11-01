/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 04:08:09 by mestefan          #+#    #+#             */
/*   Updated: 2023/11/20 04:08:14 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int	main(void)
{
	const char	*s = "Hello";
	int	c = 'e';
	
	const void	*result = ft_strchr(s, c);
	if (result != 0)
	{
		printf("'%c' found first at byte indx %zu\n", c, (const char *)result - s);
	}
	else
	{
		printf("'%c' not found in the string", c);
	}
}
*/
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (((unsigned char *)s)[i])
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			return ((void *)(unsigned char *)s + i);
		}
		i++;
	}
	if (((unsigned char *)s)[i] == (unsigned char)c)
	{
		return ((void *)(unsigned char *)s + i);
	}
	return (0);
}
