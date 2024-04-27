/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msiitone <msiitone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 09:25:08 by msiitone          #+#    #+#             */
/*   Updated: 2024/04/27 09:25:10 by msiitone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int	ft_find_smallest(t_node **head)
{
	t_node	*current;
	int		min;

	min = INT_MAX;
	current = *head;
	while (current != NULL)
	{
		if (min > current->data)
			min = current->data;
		current = current->next;
	}
	return (min);
}

int	ft_find_highest(t_node **head)
{
	t_node	*current;
	int		max;

	current = *head;
	max = INT_MIN;
	while (current != NULL)
	{
		if (max < current->data)
			max = current->data;
		current = current->next;
	}
	return (max);
}

void	set_index(t_node **head)
{
	t_node	*current;
	int		min;
	int		max;
	int		range;

	current = *head;
	min = ft_find_smallest(&current);
	max = ft_find_highest(&current);
	range = max - min;
	printf("Min: %d, Max: %d, Range: %d\n", min, max, range);
	while (current != NULL)
	{
		(current)->index = (int)((current)->data - min) * range / range;
		printf("%d, %d\n", (current)->data, (current)->index);
		current = current->next;
	}
	return ;
}
