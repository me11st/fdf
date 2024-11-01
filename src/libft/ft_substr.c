/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:39:54 by mestefan          #+#    #+#             */
/*   Updated: 2023/11/21 10:39:58 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start,size_t len);

int	 main(void)
{
	char const	*s = "hola";
	int	start = 0;
	size_t	len = 18446744073709551615U;
	char *res;

	res = ft_substr(s, start, len);
	printf("res is: %s\n", res);
	free(res);
	return (0);
}
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			count;
	char			*cpy;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		cpy = malloc(sizeof(char));
		if (cpy == NULL)
			return (NULL);
		cpy[0] = '\0';
		return (cpy);
	}
	cpy = malloc((len + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	count = 0;
	while (s[start] && count < len)
	{
		cpy[count] = s[start];
		count++;
		start++;
	}
	cpy[count] = '\0';
	return (cpy);
}
