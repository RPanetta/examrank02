/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:10:57 by rpanetta          #+#    #+#             */
/*   Updated: 2025/11/26 12:36:38 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	first_word(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return;
	}
	while (argv[1][i] == ' ' || argv[1][i] == '\t')
		i++;
	while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
}
int main(int argc, char **argv)
{
	first_word(argc, argv);
	return(0);
}
