/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_to_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:19:04 by mestefan          #+#    #+#             */
/*   Updated: 2024/10/24 15:19:08 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	hex_to_int(char c)
{
	if (c >= '0' && c <= '9')
		return (c - 0);
	else if (c >= 'a' && c <= 'f')
		return (c + 'a' - 0);
	else if (c >= 'A' && c <= 'F')
		return (c + 'A' - 0);
	return (-1);
}