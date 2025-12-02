/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:50:22 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/02 14:32:34 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	repeat_alpha(int argc, char **argv)
{
	int		i;
	char	c;
	int		repeat;
	int		j;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			c = argv[1][i];
			if (c >= 'a' && c <= 'z')
			{
				repeat = c - 'a' + 1;
				j = 0;
				while (j < repeat)
				{
					write(1, &c, 1);
					j++;
				}
			}
			else if (c >= 'A' && c <= 'Z')
			{
				repeat = c - 'A' + 1;
				j = 0;
				while (j < repeat)
				{
					write(1, &c, 1);
					j++;
				}
			}
			else
				write(1, &c, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (argv[1][i]);
}

int	main(int argc, char **argv)
{
	repeat_alpha(argc, argv);
	return (0);
}
