/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsadi <ilsadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:34:37 by ilsadi            #+#    #+#             */
/*   Updated: 2025/05/28 14:20:07 by ilsadi           ###   ########.fr       */
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

static int	clean_tab(char **tab, char **tmp, int k)
{
	int	i;

	i = 0;
	while (tmp[i])
	{
		tab[k] = ft_strdup(tmp[i]);
		if (!tab[k])
			return (-1);
		free(tmp[i]);
		i++;
		k++;
	}
	free(tmp);
	return (k);
}

// split les arguments si jamais elles sont toute dans une chaine 
char	**split_args(int ac, char **av)
{
	char	**tab;
	int		i;
	int		k;
	char	**tmp;
	int		total;

	i = 1;
	k = 0;
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
		k = clean_tab(tab, tmp, k);
		if (k == -1)
			return (NULL);
		i++;
	}
	tab[k] = NULL;
	return (tab);
}
