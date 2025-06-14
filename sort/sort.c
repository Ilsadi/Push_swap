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


static int find_index(int *sorted, int size, int value)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (sorted[i] == value)
			return i;
		i++;
	}
	return (-1);
}
// transforme notre tableau actuel en tableau d'indice
int	*index_array(int *tab, int size)
{
	int	*tmp_tab;
	int	*new_tab;
	int	i;

	i = 0;
	new_tab = malloc(sizeof(int) * size);
	tmp_tab = malloc(sizeof(int) * size);
	if (!tmp_tab || !new_tab)
		return (free(tmp_tab), free(new_tab), NULL);
	while (i < size)
	{
		tmp_tab[i] = tab[i];
		i++;
	}
	ft_sort_int_tab(tmp_tab, size);
	i = 0;
	while (i < size)
	{
		new_tab[i] = find_index(tmp_tab, size, tab[i]);
		i++;
	}
	return (free(tmp_tab), new_tab);
}
