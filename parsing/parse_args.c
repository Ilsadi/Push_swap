/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsadi <ilsadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 19:24:57 by ilsadi            #+#    #+#             */
/*   Updated: 2025/05/27 23:27:15 by ilsadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_verif_and_convert(char **str_values, int *int_values)
{
	int	i;
	int	error;

	i = 0;
	error = 0;
	while (str_values[i])
	{
		if (!(ft_is_number(str_values[i])))
			return (ft_putstr_fd("Error\n", 2), 0);
		int_values[i] = ft_atoi_secure(str_values[i], &error);
		i++;
	}
	if (error == 1)
		return (ft_putstr_fd("Error\n", 2), free(int_values), 0);
	i++;
	return (1);
}

void	free_all(char **str_values, int *int_values)
{
	ft_free_tab(str_values);
	free(int_values);
}

int	*parse_args(int ac, char **av, int *size)
{
	int		i;
	char	**str_values;
	int		*int_values;
	int		error;

	(void)size;
	i = 0;
	error = 0;
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
		return (NULL);
	ft_free_tab(str_values);

	return (int_values);
}
