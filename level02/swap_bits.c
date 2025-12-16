/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 13:21:02 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/16 11:42:43 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4 | octet << 4));
}

// #include <stdio.h>
// int	main(void)
// {
// 	unsigned char	bit = 0;
// 	unsigned char	result = swap_bits((unsigned char)65);
// 	int i = 8;

// 	while (i--)
// 	{
// 		bit = (result >> i & 1) + 48;
// 		printf("%c", bit);
// 	}
// 	printf("%c", result);
// 	printf("\n");
// 	return (0);
// }
