/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 14:55:22 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/08 14:03:12 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
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
	}
	return (result * sign);
}
// int main(void)
// {
// 	char	a[] = " -123abc";
// 	printf("%d\n", ft_atoi(a));
// 	return (0);
// }