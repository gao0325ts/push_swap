/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:52:24 by stakada           #+#    #+#             */
/*   Updated: 2024/08/17 07:38:26 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

int	get_size(t_stack **stack)
{
	int		size;
	t_stack	*current;

	size = 0;
	current = *stack;
	while (current)
	{
		size++;
		current = current->next;
	}
	return (size);
}
