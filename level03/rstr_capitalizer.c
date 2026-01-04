/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:02:33 by rpanetta          #+#    #+#             */
/*   Updated: 2026/01/04 18:45:02 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		if (str[i] >= 'a' && str[i] <= 'z' && (str[i + 1] == ' '
				|| str[i + 1] == '\t' || str[i + 1] == '\0'))
		{
			str[i] = str[i] - 32;
		}
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (argc > i)
	{
		rstr_capitalizer(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	if (argc == 1)
	{
		write(1, "\n", 1);
	}
	return (0);
}
