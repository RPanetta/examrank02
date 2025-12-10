/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:15:17 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/10 15:40:07 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(int argc, char **argv)
{
	int	i;
	int	end;
	int	start;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			i++;
		}
		while (i > 0 && (argv[1][i -1] == ' ' || argv[1][i - 1] == '\t'))
		{
			i--;
		}
		end = i;
		while (i > 0 && (argv[1][i -1] != ' ' && argv[1][i - 1] != '\t'))
		{
			i--;
		}
		start = i;
		while (start < end)
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	else
	{
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	last_word(argc, argv);
	return (0);
}
