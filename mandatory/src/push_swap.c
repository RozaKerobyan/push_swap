/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:10:13 by rkerobya          #+#    #+#             */
/*   Updated: 2025/07/13 16:10:15 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	*copy_and_sort(int *arr, int size)
{
	int	*sorted;
	int	i;

	sorted = malloc(size * sizeof(int));
	if (!sorted)
		return (NULL);
	i = 0;
	while (i < size)
	{
		sorted[i] = arr[i];
		i++;
	}
	bubble_sort(sorted, size);
	return (sorted);
}

void	index_stack(int *arr, int size)
{
	int	*sorted;
	int	i;
	int	j;

	sorted = copy_and_sort(arr, size);
	if (!sorted)
		return ;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (arr[i] == sorted[j])
			{
				arr[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	free(sorted);
}

int	init_stack(t_stack *stack, char **av, int size)
{
	int	i;

	i = 0;
	stack->a = malloc(size * sizeof(int));
	if (!stack->a)
		return (0);
	stack->b = malloc(size * sizeof(int));
	if (!stack->b)
	{
		free(stack->a);
		return (0);
	}
	stack->size_a = size;
	stack->size_b = 0;
	while (i < size)
	{
		stack->a[i] = ft_atoi_push_swap(av[i], stack, av);
		i++;
	}
	check_doubles(stack->a, size, stack, av);
	return (1);
}

void	push_swap(char **av)
{
	t_stack		stack;
	int			size;

	size = push_swap_strlen(av);
	if (!init_stack(&stack, av, size))
		return ;
	index_stack(stack.a, size);
	sort(&stack, size);
	free(stack.a);
	free(stack.b);
}

int	main(int argc, char **argv)
{
	char	**flat_args;

	if (argc > 1)
	{
		flat_args = flatten_args(argc, argv);
		if (!flat_args || push_swap_strlen(flat_args) == 0)
		{
			write(2, "Error\n", 6);
			free_split(flat_args);
			return (1);
		}
		push_swap(flat_args);
		free_args(flat_args);
	}
	return (0);
}
