/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:01:47 by stakada           #+#    #+#             */
/*   Updated: 2024/08/04 15:38:19 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

static t_stack	*create_node_b(void);
static void		add_node_b(t_stack **list_b, t_stack *new_node);

t_stack	**init_b(int ac)
{
	t_stack	**list_b;
	t_stack	*new_node;
	int		i;

	list_b = (t_stack **)malloc(sizeof(t_stack *));
	if (!list_b)
		return (NULL);
	*list_b = NULL;
	i = 1;
	while (i < ac)
	{
		new_node = create_node_b();
		if (!new_node)
        {
            clear_nodes(list_b);
            free(list_b);
			return (NULL);
        }
		add_node_b(list_b, new_node);
		i++;
	}
	return (list_b);
}

static t_stack	*create_node_b(void)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->number = 0;
	new_node->coord = 0;
	new_node->next = NULL;
	return (new_node);
}

static void	add_node_b(t_stack **list_b, t_stack *new_node)
{
	t_stack	*current;

	if (!*list_b)
	{
		*list_b = new_node;
		return ;
	}
	current = *list_b;
	while (current->next)
		current = current->next;
	current->next = new_node;
}

// // Test code
// #include <stdio.h>
// int main()
// {
// 	t_stack **list_b = init_b(4);
// 	t_stack *current = *list_b;

// 	while (current)
// 	{
// 		printf("number: %d, coord: %d\n", current->number, current->coord);
//         current = current->next;
// 	}
//     clear_nodes(list_b);
//     free(list_b);
// 	return (0);
// }