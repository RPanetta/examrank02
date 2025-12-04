/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:34:05 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/02 14:34:05 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_13(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'M') ||
				(argv[1][i] >= 'a' && argv[1][i] <= 'm'))
			{
				argv[1][i] = argv[1][i] + 13;
			}
			else if ((argv[1][i] >= 'N' && argv[1][i] <= 'Z') ||
				(argv[1][i] >= 'n' && argv[1][i] <= 'z'))
			{
				argv[1][i] = argv[1][i] - 13;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	rot_13(argc, argv);
	return (0);
}
