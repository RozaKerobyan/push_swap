/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 18:47:08 by rkerobya          #+#    #+#             */
/*   Updated: 2025/03/22 19:23:16 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap_bonus.h"

char	*ft_to_new_line(char *str)
{
	int		i;
	char	*d;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	d = (char *)malloc(sizeof(char) * (i + 2));
	if (!d)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		d[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		d[i] = '\n';
		i++;
	}
	d[i] = '\0';
	return (d);
}

char	*ft_then_new_line(char *str)
{
	char	*d;
	int		i;

	i = 0;
	while (str[i] && str[i] != '\n')
	{
		i++;
	}
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	d = (char *)malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!d)
	{
		return (NULL);
	}
	d = ft_strcpy(d, str + i + 1);
	free(str);
	return (d);
}

char	*get_next_line(int fd)
{
	static char	*tmp;
	char		*line;

	if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	tmp = ft_read_file(fd, tmp);
	if (!tmp)
		return (NULL);
	line = ft_to_new_line(tmp);
	tmp = ft_then_new_line(tmp);
	return (line);
}
