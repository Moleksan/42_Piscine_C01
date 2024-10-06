/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:53:51 by moleksan          #+#    #+#             */
/*   Updated: 2023/07/20 22:33:52 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	l;
	int	r;
	int	t;

	l = 0;
	r = size - 1;
	if (size <= 0)
	{
		return ;
	}
	while (l < r)
	{
		t = tab[l];
		tab[l] = tab[r];
		tab[r] = t;
		l++;
		r--;
	}
}

// int main()
// {
//     int Array[] = {1, 2, 3, 4, 5};
//     int size = sizeof(Array) / sizeof (Array[0]);

//     printf("Array 1 : ");
//     for (int i = 0; i < size; i++)
//     {
//          printf("%d ", Array[i]);
//     }
//     printf("\n");

//     ft_rev_int_tab(Array, size);

//     printf("Array 2 : ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", Array[i]);
//     }
//     printf("\n");

//     return (0);
// } 