/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 16:10:18 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/22 14:12:18 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*current;

	current = begin_list;
	while (current != NULL)
	{
		(*f)(current->data);
		current = current->next;
	}
}

// void	print_int(void *data)
// {
// 	printf("%d\n", *(int *)data);
// }

// int	main(void)
// {
// 	int	a = 10;
// 	int	b = 20;
// 	int	c = 30;
// 	t_list	node3 = {NULL, &c};
// 	t_list	node2 = {&node3, &b};
// 	t_list	node1 = {&node2, &a};
// 	ft_list_foreach(&node1, &print_int);	
// 	return (0);
// }