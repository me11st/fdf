/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:40:07 by mestefan          #+#    #+#             */
/*   Updated: 2023/11/19 18:40:21 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <stdio.h>

int	ft_atoi(const char *str);

int main(int ac, char **av)
{
    (void)ac;
    printf("%d\n", ft_atoi(av[1]));
    return (0);
}
*/
int	ft_atoi(const char *str)
{
	int		sgn;
	long	nb;

	sgn = 1;
	nb = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sgn = -1;
	if (sgn == -1 || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (nb * sgn);
}
