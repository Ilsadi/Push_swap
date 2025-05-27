/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsadi <ilsadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:35:45 by ilsadi            #+#    #+#             */
/*   Updated: 2025/05/26 22:29:38 by ilsadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

int 	ft_is_number(char *str);
int 	ft_check_doubles(int *tab, int size);
int 	ft_atoi_secure(char *str, int *error_flag);
char 	**split_args(int ac, char **av);
int 	*parse_args(int ac, char **av, int *size);
int 	count_total_args(int ac, char **av);
int		ft_count_word(char const *str, char c);

#endif