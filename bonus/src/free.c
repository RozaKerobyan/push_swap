/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:11:58 by rkerobya          #+#    #+#             */
/*   Updated: 2025/07/13 17:07:18 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap_bonus.h"

void	free_split(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return ;
	while (split[i])
		free(split[i++]);
	free(split);
}

void	free_args(char **args)
{
	int	i;

	i = 0;
	if (!args)
		return ;
	while (args[i])
		free(args[i++]);
	free(args);
}

void	free_bonus(t_stack *stack, int option)
{
	if (stack)
	{
		if (stack->a)
			free(stack->a);
		if (stack->b)
			free(stack->b);
	}
	if (option)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	exit (0);
}
