/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msiitone <msiitone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:44:09 by msiitone          #+#    #+#             */
/*   Updated: 2024/04/24 11:44:12 by msiitone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

typedef struct    s_node {
    int        num;
    int        index;
    struct    s_node *next;
}    t_node;

void    ft_push_to_b(t_node **a, t_node **b)
{
    t_node  *temp;

    temp = *a;
    *a = (*a)->next;
    temp->next = *b;
    *b = temp;
}


int    main(void)
{
  t_node    *a;
  t_node    *b;

  a = NULL;
  b = NULL;
  t_node *node1 = malloc(sizeof(t_node));
  node1->num = 24;
  node1->next = NULL;

  t_node *node2 = malloc(sizeof(t_node));
  node2->num = 26;
  node2->next = NULL;
  
  node1->next = node2;
  a = node1;

  ft_push_to_b(&a, &b);
  
  free(node1);
  free(node2);
  return (0);
}
