/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:11:51 by rkerobya          #+#    #+#             */
/*   Updated: 2025/07/13 18:14:22 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap_bonus.h"

char	**init_args(int argc, char **argv, int *split)
{
	char	**flat_args;

	*split = 0;
	argv++;
	if (argc == 2)
	{
		flat_args = ft_split(*argv, ' ');
		if (!flat_args)
			push_swap_error(NULL, NULL);
		*split = 1;
	}
	else
		flat_args = argv;
	return (flat_args);
}

void	init_stack(t_stack *stack, char **flat_args, int split)
{
	char	**args_to_free;

	if (split)
		args_to_free = flat_args;
	else
		args_to_free = NULL;
	stack->a = check_argv(flat_args, stack, args_to_free);
	stack->size_a = push_swap_strlen(flat_args);
	stack->b = malloc(stack->size_a * sizeof(int));
	if (!stack->b)
		push_swap_error(stack, args_to_free);
	stack->size_b = 0;
}

int	main(int argc, char **argv)
{
	t_stack	stack;
	char	**flat_args;
	int		split;

	ft_bzero(&stack, sizeof(t_stack));
	if (argc > 1)
	{
		flat_args = init_args(argc, argv, &split);
		init_stack(&stack, flat_args, split);
		check_op(&stack);
		if (split)
			free_args(flat_args);
		free(stack.a);
		free(stack.b);
	}
	return (0);
}
