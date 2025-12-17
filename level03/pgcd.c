/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 21:58:15 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/17 21:58:15 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_number(int nbr1, int nbr2)
{
	int	g;

	if (nbr1 == nbr2)
	{
		return (nbr1);
	}

 	if (nbr1 > nbr2)
	{
		g = nbr2;
	}
	else
	{
		g = nbr1;
	}
	while (g > 0)
	{
		if (nbr1 % g == 0 && nbr2 % g == 0)
		{
			return (g);
		}
		g--;
	}
	return (g);
}

void	pgcd(int argc, char **argv)
{
	if (argc == 3)
	{
		char	*a;
		char	*b;
		int		nbr1;
		int 	nbr2;
		int		g;

		a = argv[1];
		b = argv[2];
		nbr1 = atoi(a);
		nbr2 = atoi(b);

		g = ft_number(nbr1, nbr2);
		printf("%d\n", g);	
	}
}

void	main(int argc, char **argv)
{
	pgcd(argc, argv);
}
