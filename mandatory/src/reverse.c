/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:10:28 by rkerobya          #+#    #+#             */
/*   Updated: 2025/07/13 16:10:30 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rra(t_stack *stack, int print)
{
	int	tmp;
	int	i;

	if (stack->size_a == 0 || stack->size_a == 1)
		return ;
	i = stack->size_a - 1;
	tmp = stack->a[i];
	while (i)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[i] = tmp;
	if (!print)
		ft_printf("rra\n");
}

void	rrb(t_stack *stack, int print)
{
	int	tmp;
	int	i;

	if (stack->size_b == 0 || stack->size_b == 1)
		return ;
	i = stack->size_b - 1;
	tmp = stack->b[i];
	while (i)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[i] = tmp;
	if (!print)
		ft_printf("rrb\n");
}

void	rrr(t_stack *stack, int print)
{
	int	tmp;
	int	i;

	if (stack->size_a == 0 || stack->size_a == 1
		|| (stack->size_b == 0 || stack->size_b == 1))
		return ;
	i = stack->size_a - 1;
	tmp = stack->a[i];
	while (i)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[i] = tmp;
	i = stack->size_b - 1;
	tmp = stack->b[i];
	while (i--)
		stack->b[i] = stack->b[i - 1];
	stack->b[i] = tmp;
	if (!print)
		ft_printf("rrr\n");
}
