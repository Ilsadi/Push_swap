/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsadi <ilsadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 20:22:24 by ilsadi            #+#    #+#             */
/*   Updated: 2025/05/29 01:21:20 by ilsadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		*int_values;
	t_list	*list_a;
	t_list	*list_b;
	int		min;

	list_a = NULL;
	list_b = NULL;
	int_values = parse_args(ac, av);
	if (!int_values)
		return (1);
	list_a = int_array_to_list(int_values, count_total_args(ac, av));
	free(int_values);
	if (!list_a)
		return (1);
	list_b = NULL;
	ft_printf("Avant tri :\n");
	print_stack(list_a, "A");
	min = ft_find_min(list_a);
	if (min < 0)
	{
		apply_offset(list_a, -min);
		radix_sort(&list_a, &list_b);
		apply_offset(list_a, min);
	}
	else
		radix_sort(&list_a, &list_b);
	ft_printf("Apres tri :\n");
	print_stack(list_a, "A");
	ft_lstclear(&list_a, free);
	return (0);
}
