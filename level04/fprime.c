/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 14:16:41 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/22 14:53:47 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fprime(int argc, char **argv)
{
	int	n;
	int	i;
	
	i = 2;
	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n == 1)
			printf("1");
		while (i <= n)
		{
			if (n % i == 0)
			{
				printf("%d", i);
				if (n != i)
					printf("*");
				n = n / i;
			}
			else
			{
				i++;
			}
		}
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	fprime(argc, argv);
	return (0);
}