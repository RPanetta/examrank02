/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:54:38 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/17 18:06:59 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	paramsum(int argc, char **argv)
{
	int	i;
	int	result;
	

	i = 0;
	if (argc <= 1)
	{
		write(1, "0", 1);
	}
	else
	{
		while (argv[i])
		{
			i++;
		}
		
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	paramsum(argc, argv);
	return (0);
}
