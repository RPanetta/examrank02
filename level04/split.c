/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:42:33 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/22 16:58:27 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_num_words(char *s)
{
	int	i = 0;
	int	count = 0;

	while (s[i])
	{
		while (s[i] == ' ' || s[i] == 9)
		{
			i++;
		}
		if (!s[i])
			break ;
		count++;
		while (s[i] && !(s[i] == ' ' || s[i] == 9))
			i++;
	}
	return (count);
}
char	*word_dup(char *s, size_t len)
{
	size_t	i = 0;
	char	*word;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}
char	**ft_split(char *str)
{
	char	**result;
	size_t	i = 0;
	size_t	j = 0;
	size_t	start;
	
	result = (char **)malloc(sizeof(char*)* (ft_num_words(str) + 1));
	if (!result)
		return (NULL);
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == 9)
		{
			i++;
		}
		if (!str[i])
			break ;
		start = i;
		while (str[i] && !(str[i] == ' ' || str[i] == 9))
		{
			i++;
		}
		result[j] = ft_word_dup(&str[start], (i - start));
		if (!result[j])
		{
			while (j > 0)
			{
				free(result[--j]);
			}
			free(result);
			return (NULL);
		}
		j++;
	}
	result[j] = NULL;
	return (result);
}

int	main(void)
{
	return (0);
}