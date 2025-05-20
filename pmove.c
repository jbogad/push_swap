/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pmove.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:07:48 by marvin            #+#    #+#             */
/*   Updated: 2025/04/08 12:07:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	pmove(t_stack **src, t_stack **dest)
{
	t_stack	*temp;

	if (*src == NULL)
		return ;
	temp = (*src)->next;
	(*src)->next = *dest;
	*dest = *src;
	*src = temp;
}
/*
	stack_a->[1]->[2]->[3]->NULL
	stack_b->[4]->[5]->NULL 
	temp->NULL
	stack_a->[2]->[3]->NULL
	stack_b->[1]->[4]->[5]->NULL
*/

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	pmove(stack_b, stack_a);
	ft_putstr("pa\n");
}
/*
	stack_a->[1]->[2]->[3]->NULL
	stack_b->[4]->[5]->NULL
	temp->NULL
	stack_a->[4]->[1]->[2]->[3]->NULL
	stack_b->[5]->NULL
*/

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	pmove(stack_a, stack_b);
	ft_putstr("pb\n");
}
