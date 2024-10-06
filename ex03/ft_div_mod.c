/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:39:11 by moleksan          #+#    #+#             */
/*   Updated: 2023/07/20 21:57:16 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	else
	{
		*div = 0;
		*mod = 0;
	}
}

// int main(void)
// {
//     int a = 21;
//     int b = 3;
//     int divr, modr;

//     ft_div_mod(a, b, &divr, &modr);

//     printf("%d / %d = %d and reminder of %d\n", a, b, divr, modr);

//     return (0);
// }
