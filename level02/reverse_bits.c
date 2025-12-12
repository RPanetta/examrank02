/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 10:34:50 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/12 13:19:56 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	unsigned int	i;

	result = 0;
	i = 8;
	while (i--)
	{
		result = result << 1 | octet & 1;
		octet = octet >> 1;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	unsigned char bit = 0;
// 	// by changing the number on the next line, you change
// 	// the bits that are sent to the reverse_bits function
// 	// 5 => 0000 0101, the result should be 1010 0000
// 	unsigned char res = reverse_bits((unsigned char)3);

// 	int i = 8;
// 	while (i--)
// 	{
// 		bit = (res >> i & 1) + 48;
// 		printf("%c", bit);
// 	}
// }
