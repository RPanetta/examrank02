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

#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	digit;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			digit = str[i] - '0';
		}
		else if (str[i] >= 'a' && str[i] <= 'f')
		{
			digit = str[i] - 'a' + 10;
		}
		else if (str[i] >= 'A' && str[i] <= 'F')
		{
			digit = str[i] - 'A' + 10;
		}
		else
			break ;
		if (digit >= str_base)
			break ;
		result = result * str_base + digit;
		i++;
	}
	return (result * sign);
}

// int	main(void)
// {
// 	char	*str = "  -1234abcd";
// 	int		result;

// 	result = ft_atoi_base(str, 16);
// 	printf("%d\n", result);
// 	return (0);
// }

////////////////////////////////////////////////////////////////////////

int	convert(char c)
{
	if (c - '0' <= 9 && c - '0'>= 0)
	{
		return (c - '0');
	}
	else if (c >= 'a' && c <= 'f')
	{
		return (c - 'a' + 10);
	}
	else if (c >= 'A' && c <= 'F')
	{
		return (c - 'A' + 10);
	}
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		if (convert(str[i]) == -1 || convert(str[i]) >= str_base)
		{
			break ;
		}
		result = result * str_base + convert(str[i]);
		i++;
	}
	return (result * sign);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char 	*str = "-1A3  ";
// 	printf("%d\n", ft_atoi_base(str, 15));
// 	printf("%d\n", ft_atoi_base(str, 16));
// 	return (0);
// }
