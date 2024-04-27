/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msiitone <msiitone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 23:13:19 by msiitone          #+#    #+#             */
/*   Updated: 2024/04/13 23:40:28 by msiitone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include <stdlib.h>
# include <stdio.h>
# include <limits.h>


typedef struct s_node {
	int				data;
	int				index;
	struct s_node	*next;
}	t_node;

t_node	*create_node(int data);
t_node	*array_to_linked_list(int argc, char **argv);
void	print_list(t_node *head);
int		ft_find_highest(t_node **head);
int		ft_find_smallest(t_node **head);
void	set_index(t_node **head);

#endif
