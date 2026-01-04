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

void	expand_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\t' || str[i] == ' ')
	{
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == ' ')
		{
			while (str[i] == '\t' || str[i] == ' ')
			{
				i++;
			}
			if (str[i] != '\0')
			{
				write(1, "   ", 3);
			}
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		expand_str(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
