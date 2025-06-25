/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsadi <ilsadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 19:28:41 by ilsadi            #+#    #+#             */
/*   Updated: 2025/06/15 19:29:05 by ilsadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// trouve le maillon avec le plus gros contenue et combien de bits pour l ecrire
static int	ft_find_max(t_list *list)
{
	int	max;
	int	bits;

	bits = 0;
	if (!list)
		return (0);
	max = *(int *)(list->content);
	while (list)
	{
		if (*(int *)(list->content) > max)
			max = *(int *)(list->content);
		list = list->next;
	}
	while (max > 0)
	{
		max >>= 1;
		bits++;
	}
	return (bits);
}

void	radix_sort(t_list **list_a, t_list **list_b)
{
	int		i;
	int		bits;
	int		size;
	int		j;
	t_list	*head;

	head = *list_a;
	size = ft_lstsize(*list_a);
	ft_index(head, size);
	i = 0;
	bits = ft_find_max(head);
	while (i < bits)
	{
		j = 0;
		while (j++ < size)
		{
			if (((*(int *)((*list_a)->content) >> i) & 1) == 0)
				pb(list_a, list_b);
			else
				ra(list_a, 1);
		}
		while (*list_b)
			pa(list_a, list_b);
		i++;
	}
}
