/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:05:46 by ilsadi            #+#    #+#             */
/*   Updated: 2025/06/14 04:46:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// swap premier et deuxieme content de la liste a
void	sa(t_list **list_a, int print)
{
	void	*tmp;

	if (!list_a || !*list_a || !(*list_a)->next)
		return ;
	tmp = (*list_a)->content;
	(*list_a)->content = (*list_a)->next->content;
	(*list_a)->next->content = tmp;
	if (print)
		ft_putstr_fd("sa\n", 1);
}

// swap premier et deuxieme content de la liste b
void	sb(t_list **list_b, int print)
{
	void	*tmp;

	if (!list_b || !*list_b || !(*list_b)->next)
		return ;
	tmp = (*list_b)->content;
	(*list_b)->content = (*list_b)->next->content;
	(*list_b)->next->content = tmp;
	if (print)
		ft_putstr_fd("sb\n", 1);
}

// les 2 en meme temps
void	ss(t_list **list_a, t_list **list_b)
{
	sa(list_a, 0);
	sb(list_b, 0);
	ft_putstr_fd("ss\n", 1);
}
