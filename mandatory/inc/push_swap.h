/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:08:48 by rkerobya          #+#    #+#             */
/*   Updated: 2025/07/13 16:08:57 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}	t_stack;

int		is_isspace(char *str);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
void	three_num_sort(t_stack *stack);
void	stack_five_sort(t_stack *stack);
char	**ft_split(char const *s, char c);
void	push_swap(char **av);
int		push_swap_strlen(char **av);
void	push_swap_error(t_stack *stack, char **flat_args);
int		ft_atoi_push_swap(char *str, t_stack *stack, char **flat_args);
void	check_doubles(int *arr, int size, t_stack *stack, char **flat_args);
void	sa(t_stack *stack, int print);
void	sb(t_stack *stack, int print);
void	ss(t_stack *stack, int print);
void	ra(t_stack *stack, int print);
void	rb(t_stack *stack, int print);
void	rr(t_stack *stack, int print);
void	rra(t_stack *stack, int print);
void	rrb(t_stack *stack, int print);
void	rrr(t_stack *stack, int print);
void	pb(t_stack *stack, int print);
void	pa(t_stack *stack, int print);
int		sort(t_stack *stack, int size);
int		check_sort(int *stack, int size, int order);
void	push_chunks_to_b(t_stack *stack, int size);
char	**flatten_args(int ac, char **av);
void	free_split(char **split);
void	free_args(char **args);
void	bubble_sort(int *arr, int size);

#endif
