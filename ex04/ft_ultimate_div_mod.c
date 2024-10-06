/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:14:22 by moleksan          #+#    #+#             */
/*   Updated: 2023/07/20 22:04:34 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t;

	if (*b != 0)
	{
		t = *a;
		*a = t / *b;
		*b = t % *b;
	}
	else 
	{
		*a = 0;
		*b = 0;
	}
}

// int main(void)
// {
//     int a = 17;
//     int b = 4;

//     ft_ultimate_div_mod(&a, &b);
//     printf("RD: %d\n", a);
//     printf("Rem of div %d\n", b);
//     return (0);
// }