/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specific_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 02:52:38 by marvin            #+#    #+#             */
/*   Updated: 2025/06/14 02:52:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_sort_three(t_list **list)
{
	int	a;
	int	b;
	int	c;

	a = *(int *)(*list)->content;
	b = *(int *)(*list)->next->content;
	c = *(int *)(*list)->next->next->content;
	if (a > b && a > c)
		ra(list, 1);
	else if (b > a && b > c)
		rra(list, 1);
	if (*(int *)(*list)->content > *(int *)(*list)->next->content)
		sa(list, 1);
}

static void	ft_sort_four(t_list **list_a, t_list **list_b)
{
	int	min_index;

	min_index = ft_find_min_index(*list_a);
	ft_move_to_top(list_a, min_index);
	pb(list_a, list_b);
	ft_sort_three(list_a);
	pa(list_a, list_b);
}

static void	ft_sort_five(t_list **list_a, t_list **list_b)
{
	int	min_index;

	while (ft_lstsize(*list_a) > 3)
	{
		min_index = ft_find_min_index(*list_a);
		ft_move_to_top(list_a, min_index);
		pb(list_a, list_b);
	}
	ft_sort_three(list_a);
	while (*list_b)
		pa(list_a, list_b);
}

static int	is_sorted(t_list *list)
{
	while (list && list->next)
	{
		if (*(int *)list->content > *(int *)list->next->content)
			return (0);
		list = list->next;
	}
	return (1);
}

void	sort_dispatcher(t_list **list_a, t_list **list_b)
{
	int	size;

	size = ft_lstsize(*list_a);
	if (size <= 1)
		return ;
	if (!is_sorted(*list_a))
	{
		if (size == 2)
			sa(list_a, 1);
		else if (size == 3)
			ft_sort_three(list_a);
		else if (size == 4)
			ft_sort_four(list_a, list_b);
		else if (size == 5)
			ft_sort_five(list_a, list_b);
		else
			radix_sort(list_a, list_b);
	}
	return ;
}
