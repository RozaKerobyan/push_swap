/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:09:12 by rkerobya          #+#    #+#             */
/*   Updated: 2025/07/13 18:11:37 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

char	**append_token(char **result, int *count, char *token)
{
	char	**new_result;
	int		k;

	new_result = malloc(sizeof(char *) * (*count + 2));
	if (!new_result)
		return (NULL);
	k = 0;
	while (k < *count)
	{
		new_result[k] = result[k];
		k++;
	}
	new_result[k++] = ft_strdup(token);
	new_result[k] = NULL;
	free(result);
	(*count)++;
	return (new_result);
}

char	**handle_split_token(char **result, char **split, int *count)
{
	int	j;

	j = 0;
	while (split[j])
	{
		result = append_token(result, count, split[j]);
		if (!result)
			return (NULL);
		j++;
	}
	return (result);
}

char	**flatten_args(int ac, char **av)
{
	int		i;
	int		count;
	char	**split;
	char	**result;

	i = 1;
	count = 0;
	result = malloc(sizeof(char *));
	if (!result)
		return (NULL);
	result[0] = NULL;
	while (i < ac)
	{
		if (!av[i] || !*av[i] || is_isspace(av[i]))
			return (free_args(result), NULL);
		split = ft_split(av[i], ' ');
		if (!split)
			return (NULL);
		result = handle_split_token(result, split, &count);
		if (!result)
			return (NULL);
		free_split(split);
		i++;
	}
	return (result);
}
