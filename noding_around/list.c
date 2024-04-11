/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msiitone <msiitone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 23:36:43 by msiitone          #+#    #+#             */
/*   Updated: 2024/04/11 23:57:16 by msiitone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

Node *create_node(int data)
{
	Node *new_node;
	new_node = (Node *)malloc(sizeof(Node));
	if (new_node == NULL)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

