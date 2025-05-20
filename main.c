/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:44:23 by marvin            #+#    #+#             */
/*   Updated: 2025/04/07 18:44:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_swap(t_stack **stack_a, t_stack **stack_b, int size_of_stack)
{
	if (size_of_stack == 2 && !is_in_order(*stack_a))
		sa(stack_a);
	else if (size_of_stack == 3)
		three_num(stack_a);
	else if (size_of_stack > 3 && !is_in_order(*stack_a))
		algorithm(stack_a, stack_b);
}

static int	has_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

static char	**handle_args(int *argc, char **argv, int *start_index)
{
	char	**new_argv;
	int		i;

	new_argv = NULL;
	if (*argc == 2 && has_spaces(argv[1]))
	{
		new_argv = split_args(argv[1]);
		if (!new_argv || !new_argv[0])
		{
			if (new_argv)
				free_array(new_argv);
			return (NULL);
		}
		i = 0;
		while (new_argv[i])
			i++;
		*argc = i + 1;
		*start_index = 0;
		return (new_argv);
	}
	*start_index = 1;
	return (argv);
}

static void	run_push_swap(char **args, int start_index, int free_args)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		stack_size;

	stack_a = NULL;
	stack_b = NULL;
	if (!correct_input_is_ok(args + start_index))
	{
		if (free_args)
			free_array(args);
		exit_error(NULL, NULL);
	}
	stack_a = add_values_in_stack(args, start_index);
	stack_size = get_stack_size(stack_a);
	put_index(stack_a, stack_size);
	push_swap(&stack_a, &stack_b, stack_size);
	free_stack(&stack_a);
	free_stack(&stack_b);
	if (free_args)
		free_array(args);
}

int	main(int argc, char **argv)
{
	char	**args;
	int		start_index;

	if (argc < 2)
		return (0);
	args = handle_args(&argc, argv, &start_index);
	if (!args)
		exit_error(NULL, NULL);
	run_push_swap(args, start_index, args != argv);
	return (0);
}
