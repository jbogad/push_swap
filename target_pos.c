/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_pos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:31:04 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/04/28 13:45:49 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	get_pos(t_stack **stack)
{
	t_stack	*tempo;
	int		i;

	tempo = *stack;
	i = 0;
	while (tempo)
	{
		tempo->pos = i;
		tempo = tempo->next;
		i++;
	}
}

int	get_lowest_index_position(t_stack **stack)
{
	t_stack	*tmp;
	int		lowest_index;
	int		lowest_pos;

	tmp = *stack;
	lowest_index = INT_MAX;
	get_pos(stack);
	lowest_pos = tmp->pos;
	while (tmp)
	{
		if (tmp->index < lowest_index)
		{
			lowest_index = tmp->index;
			lowest_pos = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (lowest_pos);
}

static int	get_target(t_stack **stack_a, int index_b,
								int smallest_greater_index, int target_pos)
{
	t_stack	*node_a;

	node_a = *stack_a;
	while (node_a)
	{
		if (node_a->index > index_b && node_a->index < smallest_greater_index)
		{
			smallest_greater_index = node_a->index;
			target_pos = node_a->pos;
		}
		node_a = node_a->next;
	}
	if (smallest_greater_index != INT_MAX)
		return (target_pos);
	node_a = *stack_a;
	while (node_a)
	{
		if (node_a->index < smallest_greater_index)
		{
			smallest_greater_index = node_a->index;
			target_pos = node_a->pos;
		}
		node_a = node_a->next;
	}
	return (target_pos);
}

void	get_target_position(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp_b;
	int		target_pos;

	tmp_b = *stack_b;
	get_pos(stack_a);
	get_pos(stack_b);
	target_pos = 0;
	while (tmp_b)
	{
		target_pos = get_target(stack_a, tmp_b->index, INT_MAX, target_pos);
		tmp_b->target_pos = target_pos;
		tmp_b = tmp_b->next;
	}
}
