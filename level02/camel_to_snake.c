/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:49:09 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/05 14:54:30 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	camel_to_snake(int argc, char **argv)
{
	int		i;
	char	underscore;

	i = 0;
	underscore = '_';
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				write(1, &underscore, 1);
				argv[1][i] = argv[1][i] + 32;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	camel_to_snake(argc, argv);
	return (0);
}
