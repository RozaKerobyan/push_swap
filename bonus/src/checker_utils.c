/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:13:26 by rkerobya          #+#    #+#             */
/*   Updated: 2025/07/13 18:45:05 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap_bonus.h"

void	exec_command(t_stack *stack, char *command)
{
	if (!ft_strcmp(command, "sa\n"))
		sa(stack, 1);
	else if (!ft_strcmp(command, "sb\n"))
		sb(stack, 1);
	else if (!ft_strcmp(command, "ss\n"))
		ss(stack, 1);
	else if (!ft_strcmp(command, "ra\n"))
		ra(stack, 1);
	else if (!ft_strcmp(command, "rb\n"))
		rb(stack, 1);
	else if (!ft_strcmp(command, "rr\n"))
		rr(stack, 1);
	else if (!ft_strcmp(command, "rra\n"))
		rra(stack, 1);
	else if (!ft_strcmp(command, "rrb\n"))
		rrb(stack, 1);
	else if (!ft_strcmp(command, "rrr\n"))
		rrr(stack, 1);
	else if (!ft_strcmp(command, "pa\n"))
		pa(stack, 1);
	else if (!ft_strcmp(command, "pb\n"))
		pb(stack, 1);
	else
		free_bonus(stack, 1);
}

void	check_op(t_stack *stack)
{
	char	*command;

	command = get_next_line(0);
	while (command)
	{
		exec_command(stack, command);
		free(command);
		command = get_next_line(0);
	}
	if (check_sort(stack->a, stack->size_a, 0) && stack->size_b == 0)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

int	*check_argv(char **argv, t_stack *stack, char **flat_args)
{
	int	*a;
	int	size;
	int	i;

	i = -1;
	size = push_swap_strlen(argv);
	a = malloc(size * sizeof(int));
	if (!a)
		push_swap_error(stack, flat_args);
	while (++i < size)
		a[i] = ft_atoi_push_swap(argv[i], stack, flat_args);
	check_doubles(a, size, stack, flat_args);
	return (a);
}
