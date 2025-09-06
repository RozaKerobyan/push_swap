/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:10:20 by rkerobya          #+#    #+#             */
/*   Updated: 2025/07/13 16:10:22 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sqrt(int n)
{
	int	i;

	i = 0;
	while (i * i <= n)
		i++;
	return (i - 1);
}

int	log_two(int n)
{
	int	count;

	count = 0;
	while (n > 1)
	{
		n = n >> 1;
		count++;
	}
	return (count);
}

int	get_chunk_range(int size)
{
	return (ft_sqrt(size) + log_two(size) - 1);
}

void	send_chunks_to_stack_b(t_stack *stack, int total, int r)
{
	int	i;
	int	pushed;

	i = 0;
	pushed = 0;
	while (pushed < total)
	{
		if (stack->a[0] <= i)
		{
			pb(stack, 0);
			rb(stack, 0);
			i++;
			pushed++;
		}
		else if (stack->a[0] <= i + r)
		{
			pb(stack, 0);
			i++;
			pushed++;
		}
		else
			ra(stack, 0);
	}
}

void	push_chunks_to_b(t_stack *stack, int size)
{
	int	r;

	r = get_chunk_range(size);
	send_chunks_to_stack_b(stack, size, r);
}
