/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_number_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:11:00 by rkerobya          #+#    #+#             */
/*   Updated: 2025/07/13 16:11:02 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	three_num_sort(t_stack *stack)
{
	if (stack->a[0] > stack->a[1] && stack->a[0] < stack->a[2]
		&& stack->a[1] < stack->a[2])
		sa(stack, 0);
	if (stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2]
		&& stack->a[1] > stack->a[2])
	{
		sa(stack, 0);
		rra(stack, 0);
	}
	if (stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2]
		&& stack->a[1] < stack->a[2])
		ra(stack, 0);
	if (stack->a[0] < stack->a[1] && stack->a[0] < stack->a[2]
		&& stack->a[1] > stack->a[2])
	{
		sa(stack, 0);
		ra(stack, 0);
	}
	if (stack->a[0] < stack->a[1] && stack->a[0] > stack->a[2]
		&& stack->a[1] > stack->a[2])
		rra(stack, 0);
}
