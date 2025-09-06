/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_number_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:09:23 by rkerobya          #+#    #+#             */
/*   Updated: 2025/07/13 16:09:24 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	find_min_pos(t_stack *stack)
{
	int	i;
	int	min;
	int	pos;

	min = stack->a[0];
	pos = 0;
	i = 1;
	while (i < stack->size_a)
	{
		if (stack->a[i] < min)
		{
			min = stack->a[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

void	bring_min_top(t_stack *stack, int pos)
{
	int	rev_moves;

	if (pos <= stack->size_a / 2)
	{
		while (pos-- > 0)
			ra(stack, 0);
	}
	else
	{
		rev_moves = stack->size_a - pos;
		while (rev_moves-- > 0)
			rra(stack, 0);
	}
}

void	stack_five_sort(t_stack *stack)
{
	int	min_pos;

	while (stack->size_a > 3)
	{
		min_pos = find_min_pos(stack);
		bring_min_top(stack, min_pos);
		pb(stack, 0);
	}
	three_num_sort(stack);
	if (stack->size_b == 2 && stack->b[0] < stack->b[1])
		sb(stack, 0);
	while (stack->size_b > 0)
		pa(stack, 0);
}
