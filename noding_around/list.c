/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msiitone <msiitone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 23:36:43 by msiitone          #+#    #+#             */
/*   Updated: 2024/04/14 00:05:28 by msiitone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_node	*create_node(int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (new_node == NULL)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

t_node	*array_to_linked_list(int argc, char **argv)
{
	t_node	*head;
	t_node	*current;
	t_node	*new_node;
	int		i;
	int		num;

	head = NULL;
	current = NULL;
	i = 0;
	while (i++ < (argc - 1))
	{
		num = atoi(argv[i]);
		new_node = create_node(num);
		if (head == NULL)
		{
			head = new_node;
			current = new_node;
		}
		else
		{
			current->next = new_node;
			current = new_node;
		}
	}
	return (head);
}

void	print_list(t_node *head)
{
	t_node	*current;

	current = head;
	while (current != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;
	}
}
