/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:15:21 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/16 11:43:56 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	char_seen(char c, char *str, int position)
{
	int	i;

	i = 0;
	while (i < position)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	char_in_str(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void	ft_union(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (!char_seen(argv[1][i], argv[1], i))
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (!char_seen(argv[2][i], argv[2], i) &&
				!char_in_str(argv[2][i], argv[1]))
			{
				write(1, &argv[2][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	ft_union(argc, argv);
	return (0);
}
