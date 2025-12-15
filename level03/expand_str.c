/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:00:13 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/15 17:00:13 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	expand_str(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == '\t' || argv[1][i] == ' ')
		{
			i++;
		}
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == '\t' || argv[1][i] == ' ')
			{
				while (argv[1][i] == '\t' || argv[1][i] == ' ')
				{
					i++;
				}
				if (argv[1][i] != '\0')
				{
					write(1, "   ", 3);
				}
			}
			else
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	expand_str(argc, argv);
	return (0);
}
