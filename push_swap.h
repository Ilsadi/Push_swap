/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsadi <ilsadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:35:45 by ilsadi            #+#    #+#             */
/*   Updated: 2025/06/16 20:15:24 by ilsadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include "libft/libft.h"

// PARSING
int		ft_is_number(char *str);
int		ft_check_doubles(int *tab, int size);
int		ft_atoi_secure(char *str, int *error_flag);
char	**split_args(int ac, char **av);
int		*parse_args(int ac, char **av);
int		count_total_args(int ac, char **av);
int		ft_count_word(char const *str, char c);

// COMMANDS
void	pa(t_list **list_a, t_list	**list_b);
void	pb(t_list **list_a, t_list **list_b);
void	sa(t_list **list_a, int print);
void	sb(t_list **list_b, int print);
void	ss(t_list **list_a, t_list **list_b);
void	ra(t_list **list_a, int print);
void	rb(t_list **list_b, int print);
void	rr(t_list **list_a, t_list **list_b);
void	rra(t_list **list_a, int print);
void	rrb(t_list **list_b, int print);
void	rrr(t_list **list_a, t_list **list_b);

// SORT
void	radix_sort(t_list **list_a, t_list **list_b);
void	ft_index(t_list *list, int size);
void	ft_move_to_top(t_list **list, int index);
int		ft_find_min_index(t_list *list);
void	sort_dispatcher(t_list **list_a, t_list **list_b);

#endif
