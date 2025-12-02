/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:06:46 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/02 14:06:46 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_print(int argc, char **argv)
{
	int		i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			i++;
		}
		while (i > 0)
		{
			i--;
			write(1, &argv[1][i], 1);
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	rev_print(argc, argv);
	return (0);
}
