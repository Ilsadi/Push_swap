/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsadi <ilsadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:05:54 by ilsadi            #+#    #+#             */
/*   Updated: 2025/05/28 21:00:37 by ilsadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// push le premier maillon de b au debut de a
void	pa(t_list **list_a, t_list	**list_b)
{
	t_list	*list_tmp;

	if (!*list_b)
		return ;
	list_tmp = *list_b;
	*list_b = (*list_b)->next;
	ft_lstadd_front(list_a, list_tmp);
}

// push le premier maillon de a au debut de b
void	pb(t_list **list_a, t_list **list_b)
{
	t_list	*list_tmp;

	if (!*list_a)
		return ;
	list_tmp = *list_a;
	*list_a = (*list_a)->next;
	ft_lstadd_front(list_b, list_tmp);
}
