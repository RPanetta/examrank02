/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:51:28 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/16 15:58:20 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
	if (size == NULL)
		return (NULL);
	i  = 0;
	if (start <= end)
	{
		while (start <= end)
		{
			
			i++;
		}
	}
	else
	{
		while (start >= end)
		{
			i++;
		}
	}
	return (array);
}
int	main(void)
{
	ft_rrange(9, 12);
	return (0);
}