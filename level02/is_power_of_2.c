/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:41:01 by rpanetta          #+#    #+#             */
/*   Updated: 2026/01/07 17:27:23 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// int	is_power_of_2(unsigned int n)
// {
// 	if (n == 0)
// 		return (0);
// 	return ((n & (n - 1)) == 0);
// }

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n > 1)
	{
		if (n % 2 != 0)
			return (0);
		n = n / 2;
	}
	return (1);
}

// int	main(void)
// {
// 	unsigned int	a = 16;

// 	printf("%d", is_power_of_2(a));
// 	return (0);
// }
