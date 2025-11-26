/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:10:57 by rpanetta          #+#    #+#             */
/*   Updated: 2025/11/26 12:19:45 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	first_word(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	
	i = 0;
	while (argv[1][i] == ' ' || argv[1][i] == '\t')
		i++;
	while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return(0);
}
int main(void)
{
	char test1[] = "hello";
	char test2[] = "FOR PONY";
	first_word(1, test1);
	first_word(2, test2);
	return(0);
}
