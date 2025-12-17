/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:58:08 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/17 14:40:03 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hidenp(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		if (argv[1][i] != '\0' && argv[2][j] != '\0')
		{
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
					i++;
				j++;
			}
			if (argv[1][i] == '\0')
			{
				write (1, "1", 1);
			}
			else
			{
				write (1, "0", 1);
			}
		}
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	hidenp(argc, argv);
	return (0);
}
