/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:54:26 by moleksan          #+#    #+#             */
/*   Updated: 2023/07/20 21:55:49 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

// int main(void)
// {
//     int n1 = 21;
//     int n2 = 42;

//     printf("Before : n1 = %d, n2 = %d\n", n1, n2);

//     ft_swap(&n1, &n2);
//     printf("After : n1 = %d, n2 = %d\n", n1, n2);
//     return (0);
// }
