/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 11:44:46 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/15 11:44:46 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		{
			i++;
		}
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
			{
				sign = -1;
			}
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}
	}
	return (result * sign);
}

void	ft_putnbr(int n)
{
	char	digit;

	if (n >= 10)
		ft_putnbr(n / 10);
	digit = (n % 10) + '0';
	write(1, &digit, 1);
}

int	is_prime(int n)
{
	int	i;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	add_prime_sum(int argc, char **argv)
{
	int	number;
	int	sum;
	int	i;

	if (argc == 2)
	{
		number = ft_atoi(argv[1]);
		if (number <= 0)
		{
			write(1, "0\n", 2);
			return (0);
		}
		sum = 0;
		i = 2;
		while (i <= number)
		{
			if (is_prime(i))
			{
				sum = sum + i;
			}
			i++;
		}
		ft_putnbr(sum);
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		write(1, "0\n", 2);
		return (0);
	}
}

int	main(int argc, char **argv)
{
	add_prime_sum(argc, argv);
	return (0);
}
