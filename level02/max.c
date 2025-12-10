/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:31:47 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/10 19:46:36 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	int				max_value;
	unsigned int	i;

	i = 0;
	if (len == 0)
	{
		return (0);
	}
	max_value = tab[0];
	while (i < len)
	{
		if (tab[i] > max_value)
			max_value = tab[i];
		i++;
	}
	return (max_value);
}

// int	main(void)
// {
// 	int	array [] = {1, 2, -5, 10, 79};
// 	unsigned int	len = 5;
// 	printf("%d", max(array, len));
// 	return (0);
// }
