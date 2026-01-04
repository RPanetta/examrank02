/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 16:44:26 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/30 17:35:53 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_wstr(char *str)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		while (i > 0 && (str[i - 1] == ' ' || str [i - 1] == '\t'))
			i--;
		end = i;
		while (i > 0 && str[i - 1] != ' ' && str[i - 1] != '\t')
			i--;
		start = i;
		while (start < end)
		{
			write(1, &str[start], 1);
			start++;
		}
		if (i > 0)
			write(1, " ", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rev_wstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
