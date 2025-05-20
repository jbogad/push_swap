/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 09:13:12 by marvin            #+#    #+#             */
/*   Updated: 2025/04/15 09:13:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*fill_stack_values(int argc, char **argv)
{
	t_stack		*stack_a;
	long int	nb;
	int			i;

	stack_a = NULL;
	nb = 0;
	i = 1;
	while (i < argc)
	{
		nb = ft_atoi(argv[i]);
		if (nb > INT_MAX || nb < INT_MIN)
			exit_error(&stack_a, NULL);
		if (i == 1)
			stack_a = new_stack((int)nb);
		else
			add_number_bottom_stack(&stack_a, new_stack((int)nb));
		i++;
	}
	return (stack_a);
}

void	put_index(t_stack *stack, int size_of_stack)
{
	t_stack	*iter;
	t_stack	*big;
	int		value;

	while (--size_of_stack > 0)
	{
		iter = stack;
		value = INT_MIN;
		big = NULL;
		while (iter)
		{
			if (iter->value == INT_MIN && iter->index == 0)
				iter->index = 1;
			if (iter->value > value && iter->index == 0)
			{
				value = iter->value;
				big = iter;
				iter = stack;
			}
			else
				iter = iter->next;
		}
		if (big != NULL)
			big->index = size_of_stack;
	}
}
