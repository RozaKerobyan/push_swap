/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:33:57 by rkerobya          #+#    #+#             */
/*   Updated: 2025/02/23 19:22:10 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(va_list args, const char format)
{
	int	j;

	j = 0;
	if (format == 'd' || format == 'i')
		j += ft_put_d(va_arg(args, int));
	else if (format == 'x' || format == 'X')
	{
		j += ft_put_x(va_arg(args, unsigned int), format);
	}
	else if (format == 's')
		j += ft_put_s(va_arg(args, char *));
	else if (format == 'c')
		j += ft_put_c(va_arg(args, int));
	else if (format == 'u')
		j += ft_put_u(va_arg(args, unsigned int));
	else if (format == 'p')
	{
		j += ft_put_s("0x");
		j += ft_put_p(va_arg(args, uintptr_t));
	}
	else if (format == '%')
		j += ft_put_c('%');
	return (j);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		j;
	va_list	arg;

	j = 0;
	va_start(arg, s);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			j += ft_convert(arg, s[i + 1]);
			i++;
		}
		else
		{
			j += ft_put_c(s[i]);
		}
		i++;
	}
	va_end(arg);
	return (j);
}
