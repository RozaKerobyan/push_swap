/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:17:06 by rkerobya          #+#    #+#             */
/*   Updated: 2025/02/23 19:19:46 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_x(unsigned long long nb, char is_case)
{
	int		i;
	char	*base;

	i = 0;
	if (is_case == 'x')
	{
		base = "0123456789abcdef";
	}
	else
	{
		base = "0123456789ABCDEF";
	}
	if (nb >= 16)
	{
		i += ft_put_x(nb / 16, is_case);
	}
	i += ft_put_c(base[nb % 16]);
	return (i);
}
