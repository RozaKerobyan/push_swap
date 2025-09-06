/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 18:45:21 by rkerobya          #+#    #+#             */
/*   Updated: 2025/03/22 19:40:35 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap_bonus.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*d;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	d = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!d)
		return (NULL);
	while (s1[++i])
		d[i] = s1[i];
	while (s2[++j])
		d[i + j] = s2[j];
	d[i + j] = '\0';
	free(s1);
	return (d);
}

char	*ft_read_file(int ft_fd, char *tmp)
{
	int		bytes_read;
	char	*d;

	d = (char *)malloc(BUFFER_SIZE + 1);
	bytes_read = 1;
	if (!d)
		return (NULL);
	while (!ft_strchr(tmp, '\n') && bytes_read != 0)
	{
		bytes_read = read(ft_fd, d, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(tmp);
			free(d);
			return (NULL);
		}
		d[bytes_read] = '\0';
		tmp = ft_strjoin(tmp, d);
	}
	free(d);
	return (tmp);
}
