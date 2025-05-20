/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:24:42 by marvin            #+#    #+#             */
/*   Updated: 2025/04/26 00:40:38 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	how_many_cost(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;
	int		size_a;
	int		size_b;

	tmp_a = *stack_a;
	tmp_b = *stack_b;
	size_a = get_stack_size(tmp_a);
	size_b = get_stack_size(tmp_b);
	while (tmp_b)
	{
		tmp_b->cost_b = tmp_b->pos;
		if (tmp_b->pos > size_b / 2)
			tmp_b->cost_b = (size_b - tmp_b->pos) * -1;
		tmp_b->cost_a = tmp_b->target_pos;
		if (tmp_b->target_pos > size_a / 2)
			tmp_b->cost_a = (size_a - tmp_b->target_pos) * -1;
		tmp_b = tmp_b->next;
	}
}

void	less_cost_movement(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tempo;
	int		cheap;
	int		cost_a;
	int		cost_b;

	tempo = *stack_b;
	cheap = INT_MAX;
	while (tempo)
	{
		if (number_absol(tempo->cost_a) + number_absol(tempo->cost_b)
			< number_absol(cheap))
		{
			cheap = number_absol(tempo->cost_b) + number_absol(tempo->cost_a);
			cost_a = tempo->cost_a;
			cost_b = tempo->cost_b;
		}
		tempo = tempo->next;
	}
	to_move (stack_a, stack_b, cost_a, cost_b);
}
