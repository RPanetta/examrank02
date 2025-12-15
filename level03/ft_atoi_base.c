/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:15:35 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/15 17:15:35 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int sign;
	int	result;
	int digit;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == 'r')
			{
				i++;
			}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			digit = str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			digit = str[i] - 'a' + 10; 
		else if (str[i] >= 'A' && str[i] <= 'F')
			digit = str[i] - 'A' + 10;
		else
			break ;
		if (digit >= str_base)
			break ;
		result = result * str_base + digit;
		i++;
	}
	return (result * sign);
}
#include <stdio.h>

int	main(void)
{
	char	*str = "  -1234abcd";
	int		result;
	result = ft_atoi_base(str, 16);
	printf("%d\n", result);
	return (0);
}