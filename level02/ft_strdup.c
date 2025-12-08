/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:22:21 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/08 15:41:38 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	copy = malloc(len + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// int	main(void)
// {
// 	char	array[] = "how are you?";
// 	char	*newstring;
// 	newstring = ft_strdup(array);
// 	printf("%s\n", newstring);
// 	return (0);
// }
