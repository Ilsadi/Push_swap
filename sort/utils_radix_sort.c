/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 00:44:13 by marvin            #+#    #+#             */
/*   Updated: 2025/06/14 00:44:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//converti ma liste en tableau de int 
static int	*convert_tab(t_list *list, int size)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	while (list && i < size)
	{
		tab[i] = *(int *)list->content;
		list = list->next;
		i++;
	}
	return (tab);
}

//tri mon tableau de int et remplace ses valeur par position dans le tableau
void	ft_index(t_list *list, int size)
{
	int		*tab;
	int		i;
	t_list	*tmp;

	tab = convert_tab(list, size);
	ft_sort_int_tab(tab, size);
	tmp = list;
	while (tmp)
	{
		i = 0;
		while (*(int *)(tmp->content) != tab[i] && i < size)
			i++;
		*(int *)(tmp->content) = i;
		tmp = tmp->next;
	}
	free(tab);
}
