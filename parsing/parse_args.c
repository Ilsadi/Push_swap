/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsadi <ilsadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 19:24:57 by ilsadi            #+#    #+#             */
/*   Updated: 2025/06/15 17:56:09 by ilsadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// verifie valeur str sont bien tous des nombres et converti pour tab de int
int	ft_verif_and_convert(char **str_values, int *int_values)
{
	int	i;
	int	error;

	i = 0;
	error = 0;
	while (str_values[i])
	{
		if (!(ft_is_number(str_values[i])))
			return (0);
		int_values[i] = ft_atoi_secure(str_values[i], &error);
		if (error)
			return (0);
		i++;
	}
	i++;
	return (1);
}

// free l'integralite de mes valeurs dans mes tableaux
void	free_all(char **str_values, int *int_values)
{
	ft_free_tab(str_values);
	free(int_values);
}

// controle final des arguments
int	*parse_args(int ac, char **av)
{
	char	**str_values;
	int		*int_values;

	if (ac > 1)
	{
		int_values = ft_calloc(sizeof(int), (count_total_args(ac, av)));
		str_values = split_args(ac, av);
		if (!(ft_verif_and_convert(str_values, int_values))
			|| ft_check_doubles(int_values, count_total_args(ac, av)))
		{
			ft_putstr_fd("Error\n", 2);
			free_all(str_values, int_values);
			return (NULL);
		}
	}
	else
		return (ft_putstr_fd("Error\n", 2), NULL);
	ft_free_tab(str_values);
	return (int_values);
}
