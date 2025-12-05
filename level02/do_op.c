/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 14:30:54 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/05 14:54:12 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	do_op(int argc, char **argv)
{
	int	i;
	int	result;

	i = 0;
	if (argc == 4)
	{
		while (argv[1][i] && argv[2][0] && argv[3][i])
		{
			if (argv[2][0] == '-')
			{
				printf("%d", atoi(argv[1]) - atoi(argv[3]));
				break ;
			}
			else if (argv[2][0] == '+')
			{
				printf("%d", atoi(argv[1]) + atoi(argv[3]));
				break ;
			}
			else if (argv[2][0] == '*')
			{
				printf("%d", atoi(argv[1]) * atoi(argv[3]));
				break ;
			}
			else if (argv[2][0] == '/')
			{
				printf("%d", atoi(argv[1]) / atoi(argv[3]));
				break ;
			}
			else if (argv[2][0] == '%')
			{
				printf("%d", atoi(argv[1]) % atoi(argv[3]));
				break ;
			}
			i++;
		}
	}
	else
	{
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	do_op(argc, argv);
	return (0);
}
