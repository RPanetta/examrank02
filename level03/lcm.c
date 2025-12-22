/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:40:41 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/22 14:13:32 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	nbr;

	if (a == 0 || b == 0)
	{
		return (0);
	}
	if (a > b)
	{
		nbr = a;
	}
	else
	{
		nbr = b;
	}
	while (nbr <= a * b)
	{
		if (nbr % a == 0 && nbr % b == 0)
		{
			return (nbr);
		}
		nbr++;
	}
}

#include <stdio.h>

int	main(void)
{
	printf("%d", lcm(12, 14));
	return (0);
}
