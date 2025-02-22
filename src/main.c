/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt < wcapt@student.42lausanne.ch >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:17:54 by wcapt             #+#    #+#             */
/*   Updated: 2025/02/22 19:09:42 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	if (argc < 2)
		return (1);
	stacks.size_a = 0;
	stacks.size_b = 0;
	stacks.stack_a = NULL;
	stacks.stack_b = NULL;
	if (!checks(argc, argv))
		return (1);
	if (!init_stacks(argc, argv, &stacks))
	{
		free_stacks(&stacks);
		return (1);
	}
	push_swap(&stacks);
	free_stacks(&stacks);
	return (0);
}

/*
if (!push_swap(&stacks))
{
    free_stacks(&stacks);
    return (1);
}
Condition qui pourrait etre utile pour checker si la fonction echoue
*/