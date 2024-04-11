/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msiitone <msiitone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 23:36:43 by msiitone          #+#    #+#             */
/*   Updated: 2024/04/12 01:23:41 by msiitone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

Node	*create_node(int data)
{
	Node	*new_node;

	new_node = (Node *)malloc(sizeof(Node));
	if (new_node == NULL)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

Node	*array_to_linked_list(int argc, char **argv)
{
	Node	*head;
	Node	*current;
	Node	*new_node;
	int		i;
	int		num;

	head = NULL;
	current = NULL;
	i = 1;
	while (i < argc)
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
		i++;
	}
	return (head);
}

void print_list(Node *head)
{
	Node *current;

	current = head;
	while (current != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;
	}
}
