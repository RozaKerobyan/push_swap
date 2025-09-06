/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:12:14 by rkerobya          #+#    #+#             */
/*   Updated: 2025/07/13 18:15:05 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap_bonus.h"

void	ft_bzero(void	*s, size_t n)
{
	size_t			i;
	unsigned char	*j;

	i = 0;
	j = s;
	while (i < n)
	{
		j[i] = 0;
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

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
