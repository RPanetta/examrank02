/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:42:38 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/08 16:45:38 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*re;

	i = 0;
	re = (char *)s1;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
				return (re);
			j++;
		}
		i++;
		re++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char	s1[] = "hello world";
// 	char	s2[] = "owx";
// 	printf("%s", ft_strpbrk(s1, s2));
// 	return (0);
// }
