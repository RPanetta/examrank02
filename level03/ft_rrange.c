/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:51:28 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/17 13:56:10 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	*array;
	int	size;
	int	i;

	if (start <= end)
	{
		size = end - start + 1;
	}
	else if (start >= end)
	{
		size = start - end + 1;
	}
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	i = 0;
	if (start <= end)
	{
		while (start <= end)
		{
			array[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		while (start >= end)
		{
			array[i] = end;
			end++;
			i++;
		}
	}
	return (array);
}

int	main(void)
{
	int	*result;
	int	size;
	int	i;

	result = ft_rrange(9, 12);
	size = 12 - 9 + 1;
	i = 0;
	while (i < size)
	{
		printf("%d ", result[i]);
		i++;
	}
	printf("\n");
	free(result);
	return (0);
}
