/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:30:29 by marvin            #+#    #+#             */
/*   Updated: 2025/04/01 20:30:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

/*==================stack===================*/
t_stack		*new_stack(int value);
t_stack		*get_last_of_stack(t_stack *stack);
t_stack		*get_pen_last_of_stack(t_stack *stack);
int			get_stack_size(t_stack	*stack);
void		add_number_bottom_stack(t_stack **stack, t_stack *new);

/*==================start===================*/
t_stack		*add_values_in_stack(char **args, int start_index);

/*================three_num==================*/
void		three_num(t_stack **stack);

/*==================pmove===================*/
void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_a, t_stack **stack_b);

/*================put_index==================*/
void		put_index(t_stack *stack, int size_of_stack);

/*===================rot====================*/
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		rr(t_stack **stack_a, t_stack **stack_b);

/*==============reverse_rotate==============*/
void		rra(t_stack **stack_a);
void		rrb(t_stack **stack_b);
void		rrr(t_stack **stack_a, t_stack **stack_b);

/*===================swap===================*/
void		sa(t_stack **stack);
void		sb(t_stack **stack_b);
void		ss(t_stack **stack_a, t_stack **stack_b);

/*==================index===================*/
t_stack		*fill_stack_values(int argc, char **argv);

/*==============check_input=================*/
int			correct_input_is_ok(char **argv);

/*===========check_input_utils==============*/
int			is_digit(char c);
int			is_sign(char c);
int			num_str_comparer(const char *s1, const char *s2);

/*==================main====================*/
int			is_in_order(t_stack *stack);

/*=================utils====================*/
void		exit_error(t_stack **stack_a, t_stack **stack_b);
void		free_stack(t_stack **stack);
long int	ft_atoi_ps(const char *str);
void		ft_putstr(char *str);
int			number_absol(int number);

/*===============algorith===================*/
void		algorithm(t_stack **stack_a, t_stack **stack_b);

/*===============cost===================*/
void		how_many_cost(t_stack **stack_a, t_stack **stack_b);
void		less_cost_movement(t_stack **stack_a, t_stack **stack_b);

/*===============target_pos=================*/
void		get_target_position(t_stack **stack_a, t_stack **stack_b);
int			get_lowest_index_position(t_stack **stack);

/*================to_move===================*/
void		to_move(t_stack **a, t_stack **b, int cost_a, int cost_b);

char		**split_args(char *str);
void		free_array(char **array);
char		**ft_split(char const *s, char c);

#endif