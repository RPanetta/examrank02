/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:42:21 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/29 17:37:45 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"
#include <stdio.h>

void	ft_replace(char **tab, int y, int x, char old, t_point size)
{
	char	new;

	new = 'F';
	if (y < 0 || x < 0 || y >= size.y || x >= size.x || tab[y][x] != old || tab[y][x] == new)
	{
		return ;
	}
	else if (tab[y][x] == old)
	{
		tab[y][x] = new;
		ft_replace(tab, y, (x + 1), old, size);
		ft_replace(tab, y, (x - 1), old, size);
		ft_replace(tab, (y + 1), x, old, size);
		ft_replace(tab, (y - 1), x, old, size);
	}
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char	old;

	old = tab[begin.y][begin.x];
	ft_replace(tab, begin.y, begin.x, old, size);
}

// int	main(void)
// {
// 	char	**area;
	
// 	t_point	size = {8, 5};
// 	t_point	begin = {1, 1};
	
// 	char	*zone[] =
// 	{
// 		"1 1 1 1 1 1 1 1",
// 		"1 0 0 0 1 0 0 1",
// 		"1 0 0 1 0 0 0 1",
// 		"1 0 1 1 0 0 0 1",
// 		"1 1 1 0 0 0 0 1",
// 		NULL	
// 	};
	
// 	//area = make_area(zone);
// 	// print_tab(area);
// 	flood_fill(area, size, begin);
// 	printf("\n");
// 	// print_tab(area);
	
// 	return (0);
// }