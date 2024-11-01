/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_atoll.c										 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mestefan <mestefan@student.42berlin.d	  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/07/20 14:56:18 by mestefan		  #+#	#+#			 */
/*   Updated: 2024/07/20 14:56:23 by mestefan		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

long long	ft_atoll(const char *str)
{
	long long	result;
	int			sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
