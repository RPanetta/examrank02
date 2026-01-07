/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:15:17 by rpanetta          #+#    #+#             */
/*   Updated: 2026/01/07 17:59:24 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	int i;
	int end;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i > 0 && (str[i - 1] == ' ' || str[i - 1] == '\t'))
	{
		i--;
	}
	end = i;
	while (i > 0 && (str[i - 1] != ' ' && str[i - 1] != '\t'))
	{
		i--;
	}
	while(i < end)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
