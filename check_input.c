/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:05:12 by marvin            #+#    #+#             */
/*   Updated: 2025/04/07 12:05:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	argum_is_digit(char *argv)
{
	int	i;

	i = 0;
	if (is_sign(argv[i]) && argv[i + 1] != '\0')
		i++;
	while (argv[i] && is_digit(argv[i]))
		i++;
	if (argv[i] != '\0' && !is_digit(argv[i]))
		return (0);
	return (1);
}

static	int	argums_is_duplicate(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 1;
		while (argv[j])
		{
			if (j != i && num_str_comparer(argv[i], argv[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static	int	argum_is_zero(char *argv)
{
	int	i;

	i = 0;
	if (is_sign(argv[i]))
		i++;
	if (argv[i] && argv[i] == '0')
		i++;
	if (argv[i] != '\0')
		return (0);
	return (1);
}

int	correct_input_is_ok(char **argv)
{
	int	i;
	int	zeros;

	i = 1;
	zeros = 0;
	while (argv[i])
	{
		if (!argum_is_digit(argv[i]))
			return (0);
		ft_atoi_ps(argv[i]);
		zeros += argum_is_zero(argv[i]);
		i++;
	}
	if (zeros > 1)
		return (0);
	if (argums_is_duplicate(argv))
		return (0);
	return (1);
}
