/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:06:24 by mestefan          #+#    #+#             */
/*   Updated: 2024/08/04 17:06:28 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_delim(char c, const char *delim)
{
	while (*delim)
	{
		if (c == *delim++)
			return (1);
	}
	return (0);
}

char	*ft_strtok(char *str, const char *delim)
{
	static char	*stat_str;
	char		*token;

	stat_str = NULL;
	if (str != NULL)
		stat_str = str;
	if (stat_str == NULL)
		return (NULL);
	while (is_delim(*stat_str, delim))
		stat_str++;
	if (*stat_str == '\0')
		return (NULL);
	token = stat_str;
	while (*stat_str && !is_delim(*stat_str, delim))
		stat_str++;
	if (*stat_str)
	{
		*stat_str = '\0';
		stat_str++;
	}
	return (token);
}
