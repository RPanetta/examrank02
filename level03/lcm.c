/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:40:41 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/17 16:26:16 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	g;

	if (a == 0 || b == 0)
	{
		return (0);
	}
	if (a > b)
	{
		g = a;
	}
	else
		g = b;
	while (1)
	{
		if (g % a == 0 && g % b == 0)
		{
			return (g);
		}
		g++;
	}
	
}

#include <stdio.h>

int	main(void)
{
	printf("%d", lcm(12, 14));
	return (0);
}
