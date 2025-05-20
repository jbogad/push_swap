/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:14:30 by marvin            #+#    #+#             */
/*   Updated: 2025/04/14 12:14:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	highest_num(t_stack *stack)
{
	int	ind;

	ind = stack->index;
	while (stack)
	{
		if (stack->index > ind)
			ind = stack->index;
		stack = stack->next;
	}
	return (ind);
}

void	three_num(t_stack **stack)
{
	int	high;

	if (is_in_order(*stack))
		return ;
	high = highest_num(*stack);
	if ((*stack)->index == high)
		ra(stack);
	else if ((*stack)->next->index == high)
		rra(stack);
	if ((*stack)->index > (*stack)->next->index)
		sa(stack);
}
