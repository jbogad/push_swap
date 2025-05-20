/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:43:41 by marvin            #+#    #+#             */
/*   Updated: 2025/05/20 17:56:12 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

void	exit_error(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a == NULL || *stack_a != NULL)
		free_stack(stack_a);
	if (stack_b == NULL || *stack_b != NULL)
		free_stack(stack_b);
	write(2, "Error\n", 6);
	exit (1);
}

long int	ft_atoi_ps(const char *str)
{
	long	n;
	int		i;
	long	sign;

	n = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	if (!ft_isdigit(str[i]))
		(ft_putstr_fd("Error\n", STDERR_FILENO), exit(EXIT_FAILURE));
	while (ft_isdigit(str[i]))
		n = (str[i++] - '0') + (n * 10);
	if (!ft_isdigit(str[i]) && str[i])
		(ft_putstr_fd("Error\n", STDERR_FILENO), exit(EXIT_FAILURE));
	n *= sign;
	if (n > INT_MAX || n < INT_MIN)
		(ft_putstr_fd("Error\n", STDERR_FILENO), exit(EXIT_FAILURE));
	return (n);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	number_absol(int number)
{
	if (number < 0)
		return (number * -1);
	return (number);
}
