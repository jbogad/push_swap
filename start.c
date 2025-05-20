/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 10:11:09 by marvin            #+#    #+#             */
/*   Updated: 2025/04/14 10:11:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*add_values_in_stack(char **args, int start_index)
{
	t_stack	*stack_a;
	int		i;
	long	num;
	t_stack	*new;

	stack_a = NULL;
	i = start_index;
	while (args[i])
	{
		num = ft_atoi(args[i]);
		if (num == LONG_MAX || num == LONG_MIN
			|| num > INT_MAX || num < INT_MIN)
			return (NULL);
		new = new_stack((int)num);
		if (!new)
			return (NULL);
		add_number_bottom_stack(&stack_a, new);
		i++;
	}
	return (stack_a);
}
