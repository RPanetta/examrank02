/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 17:02:43 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/30 17:36:06 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rostring(char *str)
{
	int	i;
	int	start;
	int	end;
	int	first;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
	{
		i++;
	}
	start = i;
	while (str[i] && str[i] != ' ' && str[i] != '\t')
		i++;
	end = i;
	while (str[i] == ' ' || str[i] == '\t')
	{
		i++;
	}
	first = 1;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			while (str[i] == ' ' || str[i] == '\t')
				i++;
			if (str[i])
				write (1, " ", 1);
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	if (str[end])
	{
		write(1, " ", 1);
	}
	while (start < end)
	{
		write(1, &str[start], 1);
		start++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rostring(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
