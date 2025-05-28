/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsadi <ilsadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:35:45 by ilsadi            #+#    #+#             */
/*   Updated: 2025/05/29 01:14:27 by ilsadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

// PARSING
int		ft_is_number(char *str);
int		ft_check_doubles(int *tab, int size);
int		ft_atoi_secure(char *str, int *error_flag);
char	**split_args(int ac, char **av);
int		*parse_args(int ac, char **av);
int		count_total_args(int ac, char **av);
int		ft_count_word(char const *str, char c);
void	print_stack(t_list *stack, char *name);
t_list	*int_array_to_list(int *tab, int size);

// COMMANDS
void	pa(t_list **list_a, t_list	**list_b);
void	pb(t_list **list_a, t_list **list_b);
void	sa(t_list **list_a);
void	sb(t_list **list_b);
void	ss(t_list **list_a, t_list **list_b);
void	ra(t_list **list_a);
void	rb(t_list **list_b);
void	rr(t_list **list_a, t_list **list_b);
void	rra(t_list **list_a);
void	rrb(t_list **list_b);
void	rrr(t_list **list_a, t_list **list_b);

// SORT
int		ft_find_max(t_list	*stack);
int		ft_find_min(t_list *stack);
int		ft_how_many_bits(int max);
void	radix_sort(t_list **list_a, t_list **list_b);
void	apply_offset(t_list *stack, int offset);

#endif