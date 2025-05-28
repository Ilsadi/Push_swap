/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsadi <ilsadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 19:28:41 by ilsadi            #+#    #+#             */
/*   Updated: 2025/05/28 21:02:20 by ilsadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	while_radix_sort(t_list **list_a, t_list **list_b, int bits)
{
	int	size;
	int	j;
	int	value;
	int	current_bit;

	j = 0;
	size = ft_lstsize(*list_a);
	while (j < size)
	{
		value = *(int *)(*list_a)->content;
		current_bit = (value >> bits) & 1;
		if (current_bit == 0)
			pb(list_a, list_b);
		else
			ra(list_a);
		j++;
	}
}

void	radix_sort(t_list **list_a, t_list **list_b)
{
	int	i;
	int	max;
	int	max_bits;

	i = 0;
	max = ft_find_max(*list_a);
	max_bits = ft_how_many_bits(max);
	while (i < max_bits)
	{
		while_radix_sort(list_a, list_b, i);
		while (*list_b != NULL)
			pa(list_a, list_b);
		i++;
	}
}

