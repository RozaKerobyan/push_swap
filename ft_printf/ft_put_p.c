/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:25:41 by rkerobya          #+#    #+#             */
/*   Updated: 2025/02/23 19:25:43 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_p(unsigned long nb)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		i += ft_put_p(nb / 16);
		i += ft_put_p(nb % 16);
	}
	else
	{
		i += ft_put_c(base[nb % 16]);
	}
	return (i);
}
