/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsadi <ilsadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:34:37 by ilsadi            #+#    #+#             */
/*   Updated: 2025/06/17 07:10:54 by ilsadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	count_total_args(int ac, char **av)
{
	int	i;
	int	total;

	i = 1;
	total = 0;
	while (i < ac)
	{
		total += ft_count_word(av[i], ' ');
		i++;
	}
	return (total);
}

static int	clean_tab(char **tab, char **tmp, int tab_index)
{
	int	i;

	i = 0;
	while (tmp[i])
	{
		tab[tab_index] = ft_strdup(tmp[i]);
		if (!tab[tab_index])
			return (-1);
		free(tmp[i]);
		i++;
		tab_index++;
	}
	free(tmp);
	return (tab_index);
}

// split les arguments si jamais elles sont toute dans une chaine 
char	**split_args(int ac, char **av)
{
	char	**tab;
	int		i;
	int		tab_index;
	char	**tmp;
	int		total;

	i = 1;
	tab_index = 0;
	total = count_total_args(ac, av);
	tab = malloc(sizeof(char *) * (total + 1));
	while (av[i])
	{
		tmp = ft_split(av[i], ' ');
		if (!tmp)
		{
			free(tmp);
			return (NULL);
		}
		tab_index = clean_tab(tab, tmp, tab_index);
		if (tab_index == -1)
			return (NULL);
		i++;
	}
	tab[tab_index] = NULL;
	return (tab);
}
