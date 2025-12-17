/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:39:40 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/17 13:55:24 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	size;
	int	*array;

	if (start <= end)
	{
		size = end - start + 1;
	}
	else
		size = start - end + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	i = 0;
	if (start <= end)
	{
		while (start <= end)
		{
			array[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		while (start >= end)
		{
			array[i] = start;
			start--;
			i++;
		}
	}
	return (array);
}

int	main(void)
{
	int	*result;
	int	i;
	int	size;

	result = ft_range(3, 6);
	size = 6 - 3 + 1;
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
