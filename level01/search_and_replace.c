/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 14:59:26 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/04 17:40:20 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_and_replace(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 4)
	{
		if (argv[2][0] && argv[2][1] == '\0' &&
				argv[3][0] && argv[3][1] == '\0')
		{
			while (argv[1][i])
			{
				if (argv[1][i] == argv[2][0])
				{
					argv[1][i] = argv[3][0];
				}
				write(1, &argv[1][i], 1);
				i++;
			}
			write(1, "\n", 1);
		}
		else
			write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	search_and_replace(argc, argv);
	return (0);
}
