#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct	s_node {
	int		num;
	struct	s_node *next;
}	t_node;

void	ft_rotate_a(t_node **head)
{
	t_node  *end;
	t_node	*new_end;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	end = *head;
	while (end->next != NULL)
	{
		new_end = end;
		end = end->next;
	}
	end->next = *head;
	*head = (*head)->next;
	end->next->next = NULL;
}

void	print_list(t_node *head)
{
	t_node	*current;

	current = head;
	while (current != NULL)
	{
		printf("%d\n", current->num);
		current = current->next;
	}
}

int	main(void)
{
	t_node	*a;

	a = NULL;
	t_node *node1 = malloc(sizeof(t_node));
	node1->num = 24;
	node1->next = NULL;

	t_node *node2 = malloc(sizeof(t_node));
	node2->num = 26;
	node2->next = NULL;
  
	t_node *node3 = malloc(sizeof(t_node));
	node3->num = 28;
	node3->next = NULL;

	t_node *node4 = malloc(sizeof(t_node));
	node4->num = 30;
	node4->next = NULL;
  
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	a = node1;

	print_list(a);
	ft_rotate_a(&a);

	printf("Rotated list: \n");
	t_node *current = a;
	print_list(a);
  
	free(node1);
	free(node2);
	free(node3);
	return (0);
}
