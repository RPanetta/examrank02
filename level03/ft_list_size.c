/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 11:28:56 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/15 16:57:55 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	t_list	*tmp;
	int		size;

	tmp = begin_list;
	while (tmp != NULL)
	{
		size++;
		tmp = tmp->next;
	}
	return (size);
}

int	main(void)
{
	t_list	*new_node;
	t_list	*head;

	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		return (0);
	new_node->data = 42;
	new_node->next = NULL;
	head = new_node;

	t_list *new_node2 = malloc(sizeof(t_list));
	if (new_node2 == NULL)
		return (0);
	new_node2->data = 22;
	new_node2->next = NULL;
	head->next = new_node2;
	
	t_list *new_node3 = malloc(sizeof(t_list));
	if (new_node3 == NULL)
		return (0);
	new_node3->data = 77;
	new_node3-> next = NULL;
	head->next->next = new_node3;

	int	size = ft_list_size(head);
	printf("%d", size);
	return (0);
}
