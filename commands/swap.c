/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsadi <ilsadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:05:46 by ilsadi            #+#    #+#             */
/*   Updated: 2025/05/28 21:01:14 by ilsadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// swap premier et deuxieme content de la liste a
void	sa(t_list **list_a)
{
	void	*tmp;

	if (!list_a || !*list_a || !(*list_a)->next)
		return ;
	tmp = (*list_a)->content;
	(*list_a)->content = (*list_a)->next->content;
	(*list_a)->next->content = tmp;
}

// swap premier et deuxieme content de la liste b
void	sb(t_list **list_b)
{
	void	*tmp;

	if (!list_b || !*list_b || !(*list_b)->next)
		return ;
	tmp = (*list_b)->content;
	(*list_b)->content = (*list_b)->next->content;
	(*list_b)->next->content = tmp;
}

// les 2 en meme temps
void	ss(t_list **list_a, t_list **list_b)
{
	sa(list_a);
	sb(list_b);
}
