/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 20:22:24 by ilsadi            #+#    #+#             */
/*   Updated: 2025/06/14 04:31:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*int_array_to_list(int *tab, int size)
{
	t_list	*list;
	int		i;
	int		*value;
	t_list	*new;

	i = 0;
	list = NULL;
	while (i < size)
	{
		value = malloc(sizeof(int));
		if (!value)
			return (NULL);
		*value = tab[i];
		new = ft_lstnew(value);
		if (!new)
		{
			free(value);
			ft_lstclear(&list, free);
			return (NULL);
		}
		ft_lstadd_back(&list, new);
		i++;
	}
	return (list);
}

int main(int ac, char **av)
{
	int		*int_values;
	t_list	*list_a = NULL;
	t_list	*list_b = NULL;

	if (ac < 2)
		return (0);
	int_values = parse_args(ac, av);
	if (!int_values)
		return (1);
	list_a = int_array_to_list(int_values, count_total_args(ac, av));
	free(int_values);
	if (!list_a)
		return (1);
	sort_dispatcher(&list_a, &list_b);
	ft_lstclear(&list_a, free);
	return (0);
}

