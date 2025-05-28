/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsadi <ilsadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:06:00 by ilsadi            #+#    #+#             */
/*   Updated: 2025/05/28 18:41:58 by ilsadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//passe le premier dernier et decale tout les autres d'un
void	ra(t_list **list_a)
{
	t_list	*tmp;

	if (!list_a || !*list_a || !(*list_a)->next)
		return ;
	tmp = *list_a;
	*list_a = (*list_a)->next;
	tmp->next = NULL;
	ft_lstadd_back(list_a, tmp);
}


// la meme sur la liste b
void	rb(t_list **list_b)
{
	t_list	*tmp;

	if (!list_b || !*list_b || !(*list_b)->next)
		return ;
	tmp = *list_b;
	*list_b = (*list_b)->next;
	tmp->next = NULL;
	ft_lstadd_back(list_b, tmp);
}

void	rr(t_list **list_a, t_list **list_b)
{
	ra(list_a);
	rb(list_b);
}
