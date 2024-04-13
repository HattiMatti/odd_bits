/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msiitone <msiitone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:37:53 by msiitone          #+#    #+#             */
/*   Updated: 2024/04/13 23:39:09 by msiitone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int	main(int argc, char **argv)
{
	int		i;
	t_node	*head;
	t_node	*current;
	t_node	*temp;

	head = array_to_linked_list(argc, argv);
	print_list(head);
	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	return (0);
}
