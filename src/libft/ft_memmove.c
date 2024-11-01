/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:28:49 by mestefan          #+#    #+#             */
/*   Updated: 2023/11/19 22:28:52 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>
/*
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n);

int	main(void)
{
	const char src[] = "mell";
    char dst[] = "test";
	size_t	size = 3;
	printf("dst is: %s\n", dst);
	ft_memmove(dst, src, size);
	printf("dst is: %s\n", dst);
	return (0);
}
*/

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if (dst == 0 && src == 0)
		return (dst);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	return (dst);
}
