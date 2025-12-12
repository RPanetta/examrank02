/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 11:47:07 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/12 13:20:16 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wdmatch(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i] && argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
				i++;
			}
			j++;
		}
		if (argv[1][i] == '\0')
		{
			i = 0;
			while (argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}

// int	main(int argc, char **argv)
// {
// 	wdmatch(argc, argv);
// 	return (0);
// }
