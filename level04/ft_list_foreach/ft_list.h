/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 16:10:22 by rpanetta          #+#    #+#             */
/*   Updated: 2025/12/22 14:12:49 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
#define FT_LIST_H

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

#endif