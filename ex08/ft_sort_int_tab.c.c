/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:34:37 by moleksan          #+#    #+#             */
/*   Updated: 2023/07/20 22:43:59 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int s)
{
	int	i;
	int	j;
	int	t;

	if (s <= 0)
	{
		return ;
	}
	i = 0;
	while (i < s - 1)
	{
		j = 0;
		while (j < s - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				t = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = t;
			}
			j++;
		}
		i++;
	}
}

// int main()
// {
//     int Array[] = {5, 2, -8, 1, 3};
//     int s = sizeof(Array) / sizeof(Array[0]);

//     printf("Array1: ");
//     for (int i = 0; i < s; i++)
//     {
//          printf("%d ", Array[i]);
//     }
//     printf("\n");

//     ft_sort_int_tab(Array, s);

//     printf("Array2: ");
//     for (int i = 0; i < s; i++)
//     {
//         printf("%d ", Array[i]);
//     }
//     printf("\n");

//     return 0;
// }