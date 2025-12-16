/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 11:28:56 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/16 14:33:30 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
// #include <stdlib.h>

// int	ft_list_size(t_list *begin_list)
// {
// 	t_list	*tmp;
// 	int		size;

// 	tmp = begin_list;
// 	size = 0;
// 	while (tmp != NULL)
// 	{
// 		size++;
// 		tmp = tmp->next;
// 	}
// 	return (size);
// }

int	ft_list_size(t_list *begin_list)
{
	int	count;

	count = 0;
	while (begin_list != NULL)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}

// int	main(void)
// {
// 	t_list	*new_node;
// 	t_list	*head;

// 	new_node = malloc(sizeof(t_list));
// 	if (new_node == NULL)
// 		return (0);
// 	new_node->data = 42;
// 	new_node->next = NULL;
// 	head = new_node;

// 	t_list *new_node2 = malloc(sizeof(t_list));
// 	if (new_node2 == NULL)
// 		return (0);
// 	new_node2->data = 22;
// 	new_node2->next = NULL;
// 	head->next = new_node2;
	
// 	t_list *new_node3 = malloc(sizeof(t_list));
// 	if (new_node3 == NULL)
// 		return (0);
// 	new_node3->data = 77;
// 	new_node3-> next = NULL;
// 	head->next->next = new_node3;

// 	int	size = ft_list_size(head);
// 	printf("%d", size);
// 	return (0);
// }


int	main(void)
{
	int result;
	t_list list;
	t_list	node2;
	t_list	node3;
	t_list	node4;
	list.data = ("A");
	list.next = &node2;
	node2.data = ("B");
	node2.next = &node3;
	node3.data = ("C");
	node3.next = &node4;
	node4.data = ("D");
	node4.next = NULL;
	result = (ft_list_size(&list));
	printf("%d\n", result);
}
