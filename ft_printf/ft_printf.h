/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:54:55 by rkerobya          #+#    #+#             */
/*   Updated: 2025/02/23 19:23:03 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <stdlib.h>

int	ft_put_s(char *c);
int	ft_put_c(int c);
int	ft_put_d(int nb);
int	ft_put_u(unsigned int nb);
int	ft_put_p(unsigned long nb);
int	ft_put_x(unsigned long long nb, char is_case);
int	ft_printf(const char *s, ...);

#endif
