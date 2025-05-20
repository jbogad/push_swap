/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:13:44 by marvin            #+#    #+#             */
/*   Updated: 2025/04/07 20:13:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_last_of_stack(t_stack *stack)
{
	while (stack && stack->next != NULL)
		stack = stack->next;
	return (stack);
}

t_stack	*get_pen_last_of_stack(t_stack *stack)
{
	while (stack && stack->next && stack->next->next != NULL)
		stack = stack->next;
	return (stack);
}

int	get_stack_size(t_stack	*stack)
{
	int	size;

	size = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}

t_stack	*new_stack(int value)
{
	t_stack	*new;

	new = malloc (sizeof * new);
	if (!new)
		return (NULL);
	new -> value = value;
	new -> index = 0;
	new -> pos = -1;
	new -> target_pos = -1;
	new -> cost_a = -1;
	new -> cost_b = -1;
	new -> next = NULL;
	return (new);
}

void	add_number_bottom_stack(t_stack **stack, t_stack *new)
{
	t_stack	*last;

	if (!new)
		return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	last = get_last_of_stack(*stack);
	last->next = new;
}
