/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:56:45 by rpanetta          #+#    #+#             */
/*   Updated: 2025/11/27 15:04:01 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	fizzbuzz(int nbr)
{
	while (nbr <= 100)
	{
		if (nbr % 3 == 0 && nbr % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (nbr % 3 == 0)
			write(1, "fizz", 4);
		else if (nbr % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(nbr);
		write (1, "\n", 1);
		nbr++;
	}
	return (nbr);
}

int	main(void)
{
	int	numbr;

	numbr = 1;
	fizzbuzz(numbr);
	return (0);
}
