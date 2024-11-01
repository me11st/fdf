/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 04:09:33 by mestefan          #+#    #+#             */
/*   Updated: 2023/11/20 04:09:35 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(int argc, char *argv[])
{
	int res;
	int	res_g;

	if (argc <= 3)
	{
		fprintf(stderr, "Usage: %s <str1> <str2> [<len>]\n", argv[0]);
		return (1);
	}

	else
	{
		res = ft_strncmp(argv[1], argv[2], atoi(argv[3]));
		res_g = strncmp(argv[1], argv[2], atoi(argv[3]));
	}

	if (res == 0)
	{
		printf("<str1> and <str2> are equal");
		if (argc > 3)
			printf(" in the first %d bytes\n", atoi(argv[3]));
		printf("\n");
	}
	else if (res_g < 0)
	{
		printf("<str1> is less than <str2> (%d)\n", res_g);
	}
	else
	{
		printf("<str1> is greater than <str2> (%d)\n", res_g);
	}
	
	if (res_g == 0)
	{
		printf("<str1> and <str2> are equal");
		if (argc > 3)
			printf(" in the first %d bytes\n", atoi(argv[3]));
		printf("\n");
	}
	else if (res_g < 0)
	{
		printf("<str1> is less than <str2> (%d)\n", res_g);
	}
	else
	{
		printf("<str1> is greater than <str2> (%d)\n", res_g);
	}
	return (0);
}
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
	{
		return (0);
	}
	while ((unsigned char)*s1 == (unsigned char)*s2 && *s1 != '\0' && n - 1 > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
