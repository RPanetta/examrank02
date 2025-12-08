/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:56:54 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/08 17:12:33 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_inter(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		while(argv[1][i] != '\0' && argv[2][i] != '\0')
		{
			if (argv[2][i] == argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			i++;
		}
	}
	else
	{
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	ft_inter(argc, argv);
	return (0);
}
