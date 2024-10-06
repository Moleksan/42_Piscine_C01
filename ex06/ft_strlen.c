/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:43:56 by moleksan          #+#    #+#             */
/*   Updated: 2023/07/20 22:26:19 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		cnt++;
		i++;
	}
	return (cnt);
}

// int main(void)
// {
//     char Str[] = "I am Alex";
//     int l = ft_strlen(Str);

//     printf("Length: %d\n", l);
//     return (0);
// }
