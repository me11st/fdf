/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:29:09 by mestefan          #+#    #+#             */
/*   Updated: 2023/11/19 22:29:11 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>
/*
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n);

int	main(void)
{
	unsigned char	s[] = "test";
	int	c = 'x';
	size_t	size = 4;
	printf("s is: %s\n", s);
	ft_memset(s, c, size);
	printf("s is: %s\n", s);
	return (0);
}
*/

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}
