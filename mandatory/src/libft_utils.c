/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:09:56 by rkerobya          #+#    #+#             */
/*   Updated: 2025/07/13 18:12:41 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!s)
	{
		return (0);
	}
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

int	is_isspace(char *str)
{
	int	i;

	i = 0;
	if (!str || str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] != ' ' && (str[i] < 9 || str[i] > 13))
			return (0);
		i++;
	}
	return (1);
}
