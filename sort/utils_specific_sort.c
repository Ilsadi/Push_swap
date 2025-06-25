/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_specific_sort.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 03:02:47 by marvin            #+#    #+#             */
/*   Updated: 2025/06/14 03:02:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// trouve l index du maillon qui contient le plus petit int
int	ft_find_min_index(t_list *list)
{
	int	min;
	int	index;
	int	min_index;

	if (!list)
		return (-1);
	min = *(int *)(list->content);
	index = 0;
	min_index = 0;
	while (list)
	{
		if (*(int *)(list->content) < min)
		{
			min = *(int *)(list->content);
			min_index = index;
		}
		list = list->next;
		index++;
	}
	return (min_index);
}

// permet de mettre le maillon a un index donner tout au debut de la chaine 
void	ft_move_to_top(t_list **list, int index)
{
	int	size;

	size = ft_lstsize(*list);
	if (index <= size / 2)
	{
		while (index > 0)
		{
			ra(list, 1);
			index--;
		}
	}
	else
	{
		index = size - index;
		while (index > 0)
		{
			rra(list, 1);
			index--;
		}
	}
}
