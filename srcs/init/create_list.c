/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 02:24:26 by stakada           #+#    #+#             */
/*   Updated: 2024/08/18 01:02:57 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

t_stack	**create_list(int ac)
{
	t_stack	**stack;
	t_stack	*new_node;
	int		i;

	stack = (t_stack **)malloc(sizeof(t_stack *));
	if (!stack)
		return (NULL);
	*stack = NULL;
	i = 1;
	while (i < ac)
	{
		new_node = create_node();
		if (!new_node)
		{
			clear_nodes(stack);
			free(stack);
			return (NULL);
		}
		add_node(stack, new_node);
		i++;
	}
	return (stack);
}

t_stack	**create_list_onestr(char **args)
{
	t_stack	**stack;
	t_stack	*new_node;
	int		i;

	stack = (t_stack **)malloc(sizeof(t_stack *));
	if (!stack)
		return (NULL);
	*stack = NULL;
	i = 0;
	while (args[i])
	{
		new_node = create_node();
		if (!new_node)
		{
			clear_nodes(stack);
			free(stack);
			return (NULL);
		}
		add_node(stack, new_node);
		i++;
	}
	return (stack);
}

t_stack	*create_node(void)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = 0;
	new_node->rank = 0;
	new_node->next = NULL;
	return (new_node);
}

void	add_node(t_stack **stack, t_stack *new_node)
{
	t_stack	*current;

	if (!*stack)
	{
		*stack = new_node;
		return ;
	}
	current = *stack;
	while (current->next)
		current = current->next;
	current->next = new_node;
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	(void)av;
// 	t_stack **list_a = create_list(ac);
// 	t_stack *current = *list_a;

// 	while (current)
// 	{
// 		printf("number: %d, rank: %d\n", current->value, current->rank);
// 		current = current->next;
// 	}
// 	clear_nodes(list_a);
// 	free(list_a);
// 	return (0);
// }