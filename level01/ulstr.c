/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:42:34 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/04 18:00:05 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				argv[1][i] = argv[1][i] - 32;
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				argv[1][i] = argv[1][i] + 32;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	ulstr(argc, argv);
	return (0);
}