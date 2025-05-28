/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsadi <ilsadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 20:39:36 by ilsadi            #+#    #+#             */
/*   Updated: 2025/05/28 21:22:07 by ilsadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_stack(t_list *stack, char *name)
{
	ft_printf("Stack %s: ", name);
	while (stack)
	{
		ft_printf("%d ", *(int *)stack->content);
		stack = stack->next;
	}
	ft_printf("\n");
}

t_list	*int_array_to_list(int *tab, int size)
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

void	apply_offset(t_list *stack, int offset)
{
	while (stack != NULL)
	{
		*(int *)stack->content += offset;
		stack = stack->next;
	}
}
