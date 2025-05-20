/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:24:42 by marvin            #+#    #+#             */
/*   Updated: 2025/04/22 14:24:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	all_move_no_three(t_stack **stack_a, t_stack **stack_b)
{
	int	size_of_stack;
	int	i;
	int	moved;

	size_of_stack = get_stack_size(*stack_a);
	i = 0;
	moved = 0;
	while (size_of_stack > 6 && i < size_of_stack && moved < size_of_stack / 2)
	{
		if ((*stack_a)->index <= size_of_stack / 2)
		{
			pb(stack_a, stack_b);
			moved++;
		}
		else
			rra(stack_a);
		i++;
	}
	while (size_of_stack - moved > 3)
	{
		pb(stack_a, stack_b);
		moved++;
	}
}

static void	shift_stack(t_stack **stack_a)
{
	int	lowest_pos;
	int	stack_size;

	stack_size = get_stack_size(*stack_a);
	lowest_pos = get_lowest_index_position(stack_a);
	if (lowest_pos > stack_size / 2)
	{
		while (lowest_pos < stack_size)
		{
			rra(stack_a);
			lowest_pos++;
		}
	}
	else
	{
		while (lowest_pos > 0)
		{
			ra(stack_a);
			lowest_pos--;
		}
	}
}

void	algorithm(t_stack **stack_a, t_stack **stack_b)
{
	all_move_no_three(stack_a, stack_b);
	three_num(stack_a);
	while (*stack_b)
	{
		get_target_position(stack_a, stack_b);
		how_many_cost(stack_a, stack_b);
		less_cost_movement(stack_a, stack_b);
	}
	if (!is_in_order(*stack_a))
		shift_stack(stack_a);
}
