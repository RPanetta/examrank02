/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 14:03:53 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/08 15:20:19 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;
	int		k;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k = 1;
				break ;
			}
			j++;
		}
		if (!k)
			return (i);
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	a[] = "1234abcd";
// 	char	b[] = "1234abefghi";
// 	printf("%zu", ft_strspn(a, b));
// 	return (0);
// }
