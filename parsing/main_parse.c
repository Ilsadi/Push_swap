/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsadi <ilsadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 23:45:35 by ilsadi            #+#    #+#             */
/*   Updated: 2025/05/28 14:29:46 by ilsadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	if (!parse_args(ac, av))
	{
		printf("Mauvais parsing\n");
		return (0);
	}
	printf("Bon parsing\n");
	return (1);
}