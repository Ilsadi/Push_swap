/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsadi <ilsadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:39:03 by ilsadi            #+#    #+#             */
/*   Updated: 2025/05/28 16:42:52 by ilsadi           ###   ########.fr       */
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

	*n1 = 4;
	*n2 = 3;
	*n3 = 2;
	*n4 = 1;

	ft_lstadd_front(&a, ft_lstnew(n1));
	ft_lstadd_front(&a, ft_lstnew(n2));
	ft_lstadd_front(&b, ft_lstnew(n3));
	ft_lstadd_front(&b, ft_lstnew(n4));


	print_stack(a, "A");
	print_stack(b, "B");

	printf("Activation de sa\n");
	sa(&a);

	print_stack(a, "A");
	print_stack(b, "B");

	printf("Activation de sb\n");
	sb(&b);

	print_stack(a, "A");
	print_stack(b, "B");

	printf("Activation de ss\n");
	ss(&a, &b);

	print_stack(a, "A");
	print_stack(b, "B");

	return (0);
}
