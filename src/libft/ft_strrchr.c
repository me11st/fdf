/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:47:12 by mestefan          #+#    #+#             */
/*   Updated: 2023/11/22 20:06:01 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>

char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	const char	*s = "wrrewrew";
	int	c = 'e';
	
	const void	*result = ft_strrchr(s, c);
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
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	if (s[i] == (char)c)
	{
		return ((char *)s + i);
	}
	return (0);
}
