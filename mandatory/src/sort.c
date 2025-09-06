/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:10:44 by rkerobya          #+#    #+#             */
/*   Updated: 2025/07/13 16:10:47 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	get_max_pos(t_stack *stack)
{
	int	max;
	int	pos;
	int	i;

	max = stack->b[0];
	pos = 0;
	i = 1;
	while (i < stack->size_b)
	{
		if (stack->b[i] > max)
		{
			max = stack->b[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

void	bring_max_top(t_stack *stack, int pos)
{
	if (pos < stack->size_b / 2)
	{
		while (pos-- > 0)
			rb(stack, 0);
	}
	else
	{
		pos = stack->size_b - pos;
		while (pos-- > 0)
			rrb(stack, 0);
	}
}

void	find_max_b(t_stack *stack)
{
	int	pos;

	while (stack->size_b > 0)
	{
		pos = get_max_pos(stack);
		bring_max_top(stack, pos);
		pa(stack, 0);
	}
}

int	check_sort(int *stack, int size, int order)
{
	int	i;

	if (order == 0)
	{
		i = 1;
		while (i < size)
		{
			if (stack[i - 1] > stack[i])
				return (0);
			i++;
		}
		return (1);
	}
	else
	{
		i = 1;
		while (i < size)
		{
			if (stack[i - 1] < stack[i])
				return (0);
			i++;
		}
		return (1);
	}
}

int	sort(t_stack *stack, int size)
{
	if (check_sort(stack->a, stack->size_a, 0) == 0)
	{
		if (size == 2)
			sa(stack, 0);
		else if (size == 3)
			three_num_sort(stack);
		else if (size <= 5)
			stack_five_sort(stack);
		else
		{
			push_chunks_to_b(stack, size);
			find_max_b(stack);
		}
	}
	return (0);
}
