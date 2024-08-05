/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newlist.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 02:24:26 by stakada           #+#    #+#             */
/*   Updated: 2024/08/06 00:04:54 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

t_stack	**create_list(int ac)
{
	t_stack	**list;
	t_stack	*new_node;
	int		i;

	list = (t_stack **)malloc(sizeof(t_stack *));
	if (!list)
		return (NULL);
	*list = NULL;
	i = 1;
	while (i < ac)
	{
		new_node = create_node();
		if (!new_node)
		{
			clear_nodes(list);
			free(list);
			return (NULL);
		}
		add_node(list, new_node);
		i++;
	}
	return (list);
}

t_stack	*create_node(void)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = 0;
	new_node->coord = 0;
	new_node->next = NULL;
	return (new_node);
}

void	add_node(t_stack **list_b, t_stack *new_node)
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

// #include <stdio.h>
// int main()
// {
// 	int ac = 5;
// 	t_stack **list_a = create_list(ac);
// 	t_stack *current = *list_a;

// 	while (current)
// 	{
// 		printf("number: %d, coord: %d\n", current->value, current->coord);
// 		current = current->next;
// 	}
// 	clear_nodes(list_a);
// 	free(list_a);
// 	return (0);
// }