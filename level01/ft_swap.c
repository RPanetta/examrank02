/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:05:16 by rpanetta          #+#    #+#             */
/*   Updated: 2025/11/27 15:20:06 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// int	main(void)
// {
// 	int	first = 2;
// 	int	second = 8;
// 	printf("Before: first = %d, second = %d\n", first, second);
// 	ft_swap(&first, &second);
// 	printf("After: first = %d, second = %d\n", first, second);
// 	return (0);
// }