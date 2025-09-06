/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:11:45 by rkerobya          #+#    #+#             */
/*   Updated: 2025/07/13 16:11:46 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../ft_printf/ft_printf.h"
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}	t_stack;

char	*get_next_line(int fd);
char	*ft_read_file(int ft_fd, char *tmp);
char	*ft_strcpy(char *dest, char *src);
void	free_bonus(t_stack *stack, int option);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
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
int		check_sort(int *stack, int size, int order);
void	free_split(char **split);
void	free_args(char **args);
void	exec_command(t_stack *stack, char *command);
void	check_op(t_stack *stack);
int		*check_argv(char **argv, t_stack *stack, char **flat_args);
int		ft_strcmp(char *s1, char *s2);
void	ft_bzero(void	*s, size_t n);

#endif
