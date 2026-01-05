/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:16:25 by rpanetta          #+#    #+#             */
/*   Updated: 2026/01/05 12:17:58 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list
{
	struct s_list	*next;
	int				*data;
}				t_list;

#endif

////////////////////////

// #ifndef LIST_H
// # define LIST_H

// typedef struct s_list	t_list;

// struct s_list
// {
// 	int		data;
// 	t_list	*next;
// } ;

// #endif