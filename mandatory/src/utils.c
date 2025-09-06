/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:11:25 by rkerobya          #+#    #+#             */
/*   Updated: 2025/07/13 16:11:27 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push_swap_error(t_stack *stack, char **flat_args)
{
	if (stack)
	{
		if (stack->a)
			free(stack->a);
		if (stack->b)
			free(stack->b);
	}
	free_args(flat_args);
	write(2, "Error\n", 6);
	exit(1);
}

void	check_invalid_sign_only(char *str, t_stack *stack, char **flat_args)
{
	if ((str[0] == '-' || str[0] == '+') && str[1] == '\0')
		push_swap_error(stack, flat_args);
}

int	ft_atoi_push_swap(char *str, t_stack *stack, char **flat_args)
{
	int					sign;
	unsigned int		i;
	unsigned long int	number;

	i = 0;
	sign = 1;
	number = 0;
	check_invalid_sign_only(str, stack, flat_args);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			push_swap_error(stack, flat_args);
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	if ((number > 2147483648 && sign == -1)
		|| (number > 2147483647 && sign == 1))
		push_swap_error(stack, flat_args);
	return (number * sign);
}

void	check_doubles(int *arr, int size, t_stack *stack, char **flat_args)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				push_swap_error(stack, flat_args);
			j++;
		}
		i++;
	}
}

int	push_swap_strlen(char **av)
{
	int	i;

	i = 0;
	while (*av)
	{
		av++;
		i++;
	}
	return (i);
}
