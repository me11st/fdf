/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 22:43:50 by mestefan          #+#    #+#             */
/*   Updated: 2023/11/21 22:43:54 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
#include <stdio.h>


char	*ft_itoa(int n);

int main(void)
{
    int test_values[] = {0, 123, -456, 7890, -2147483648};

    for (size_t i = 0; i < sizeof(test_values) / sizeof(test_values[0]); i++)
    {
        int value = test_values[i];
        char *result = ft_itoa(value);

        printf("Original: %d, Result: %s\n", value, result);

        free(result); 
    }

    return 0;
}
*/
static int	ft_sgn(long ln)
{
	return (ln < 0);
}

static int	ft_digcount(long ln)
{
	int		count;

	count = 1;
	if (ln == 0)
		return (count);
	if (ln < 0)
		ln = -ln;
	while (ln > 0)
	{
		ln /= 10;
		count++;
	}
	return (count);
}

static char	*ft_strrev(char *s)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
		i++;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		sgn;
	long	ln;

	sgn = ft_sgn(n);
	ln = n;
	res = (char *)malloc(sizeof(char) * (ft_digcount(ln) + sgn + 1));
	if (!(res))
		return (NULL);
	i = 0;
	if (ln < 0)
		ln = -ln;
	if (ln == 0)
		res[i++] = '0';
	while (ln > 0)
	{
		res[i++] = (char)(ln % 10 + '0');
		ln /= 10;
	}
	if (sgn)
		res[i++] = '-';
	res[i] = '\0';
	return ((ft_strrev(res)));
}
