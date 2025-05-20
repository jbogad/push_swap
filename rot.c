/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:09:17 by marvin            #+#    #+#             */
/*   Updated: 2025/04/10 12:09:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rot(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*last_node;

	temp = *stack;
	*stack = (*stack)->next;
	last_node = get_last_of_stack(*stack);
	temp->next = NULL;
	last_node->next = temp;
}

/*
  1  stack_a->[2]->[3]->[6]
  2  stack_a->[3]->[6]->[2]
*/
void	ra(t_stack **stack_a)
{
	rot(stack_a);
	ft_putstr("ra\n");
}

/*
  1  stack_->[9]->[3]->[6]
  2  stack_b->[3]->[6]->[9]
*/
void	rb(t_stack **stack_b)
{
	rot(stack_b);
	ft_putstr("rb\n");
}

/*
  1  stack_a->[2]->[3]->[6]
  2  stack_a->[3]->[6]->[2]

  1  stack_b->[9]->[3]->[6]
  2  stack_b->[3]->[6]->[9]
*/
void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rot(stack_a);
	rot(stack_b);
	ft_putstr("rr\n");
}
