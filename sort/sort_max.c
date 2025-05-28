/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsadi <ilsadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 19:09:42 by ilsadi            #+#    #+#             */
/*   Updated: 2025/05/28 21:19:37 by ilsadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// trouve le plus grand int de ma chaine
int	ft_find_max(t_list	*stack)
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

int	ft_find_min(t_list *stack)
{
	int	min;

	min = *(int *)stack->content;
	stack = stack->next;
	while (stack != NULL)
	{
		if (*(int *)stack->content < min)
			min = *(int *)stack->content;
		stack = stack->next;
	}
	return (min);
}

// trouve de combien de bits est composer le max de ma chaine
int	ft_how_many_bits(int max)
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
