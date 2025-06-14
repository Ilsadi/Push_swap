/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 19:28:41 by ilsadi            #+#    #+#             */
/*   Updated: 2025/06/14 04:48:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_find_max(t_list	*stack)
{
	int	max;

	max = *(int *)stack->content;
	stack = stack->next;
	while (stack != NULL)
	{
		if (*(int *)stack->content > max)
			max = *(int *)stack->content;
		stack = stack->next;
	}
	return (max);
}

static int	ft_how_many_bits(int max)
{
	int	count;

	count = 0;
	while (max)
	{
		count++;
		max = max >> 1;
	}
	return (count);
}

static void	while_radix_sort(t_list **list_a, t_list **list_b, int bits)
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
			ra(list_a, 1);
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

