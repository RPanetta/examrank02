/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 14:39:33 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/04 17:41:00 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'A' && argv[1][i] < 'Z') ||
				(argv[1][i] >= 'a' && argv[1][i] < 'z'))
			{
				argv[1][i] = argv[1][i] + 1;
			}
			else if (argv[1][i] == 'Z')
			{
				argv[1][i] = 'A';
			}
			else if (argv[1][i] == 'z')
			{
				argv[1][i] = 'z';
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
	rotone(argc, argv);
	return (0);
}
