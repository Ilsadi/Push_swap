/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_rev_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsadi <ilsadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:43:01 by ilsadi            #+#    #+#             */
/*   Updated: 2025/05/28 18:43:28 by ilsadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_stack(t_list *stack, char *name)
{
	printf("Stack %s: ", name);
	while (stack)
	{
		printf("%d", *(int *)stack->content);
		stack = stack->next;
	}
	printf("\n");
}

int	main(void)
{
	t_list	*a = NULL;
	t_list	*b = NULL;
	int		*n1 = malloc(sizeof(int));
	int		*n2 = malloc(sizeof(int));
	int		*n3 = malloc(sizeof(int));
	int		*n4 = malloc(sizeof(int));
	int		*n5 = malloc(sizeof(int));
	int		*n6 = malloc(sizeof(int));

	*n1 = 1;
	*n2 = 2;
	*n3 = 3;
	*n4 = 4;
	*n5 = 5;
	*n6 = 6;

	ft_lstadd_front(&a, ft_lstnew(n1));
	ft_lstadd_front(&a, ft_lstnew(n2));
	ft_lstadd_front(&a, ft_lstnew(n3));
	ft_lstadd_front(&b, ft_lstnew(n4));
	ft_lstadd_front(&b, ft_lstnew(n5));
	ft_lstadd_front(&b, ft_lstnew(n6));


	print_stack(a, "A");
	print_stack(b, "B");

	printf("Activation de rra\n");
	rra(&a);

	print_stack(a, "A");
	print_stack(b, "B");

	printf("Activation de rrb\n");
	rrb(&b);

	print_stack(a, "A");
	print_stack(b, "B");

	printf("Activation de rrr\n");
	rrr(&a, &b);

	print_stack(a, "A");
	print_stack(b, "B");

	return (0);
}