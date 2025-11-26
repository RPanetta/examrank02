/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:56:45 by rpanetta          #+#    #+#             */
/*   Updated: 2025/11/26 17:00:04 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int i)
{
	if (i > 9)
	{
		
	}
			
}

int	fizzbuzz(int nbr)
{
	while (nbr > 0 && nbr <= 100)
	if (nbr % 3 == 0)
	{
		write(1, "fizz", 4);
	}
	if (nbr % 5 == 0)
	{
		write(1, "buzz", 4);
	}
	else if (nbr % 3 == 0 && nbr % 5 == 0)
	{
		write(1, "fizzbuzz", 8);
	}
}