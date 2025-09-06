/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:12:46 by rkerobya          #+#    #+#             */
/*   Updated: 2025/07/13 16:12:48 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap_bonus.h"

void	sa(t_stack *stack, int print)
{
	int	tmp;

	if (stack->size_a == 0 || stack->size_a == 1)
		return ;
	tmp = 0;
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	if (!print)
		ft_printf("sa\n");
}

void	sb(t_stack *stack, int print)
{
	int	tmp;

	if (stack->size_b == 0 || stack->size_b == 1)
		return ;
	tmp = 0;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	if (!print)
		ft_printf("sb\n");
}

void	ss(t_stack *stack, int print)
{
	int	tmp;

	if (stack->size_a == 0 || stack->size_a == 1
		|| (stack->size_b == 0 || stack->size_b == 1))
		return ;
	tmp = 0;
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	if (!print)
		ft_printf("ss\n");
}
