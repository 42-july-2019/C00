/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 10:50:15 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/04 13:53:48 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** For 3 digit, the total number of combination is 720
** The number of unique combination is 120
** The last unique combination is 789
*/

char g_comma;
char g_space;
char g_first_d;
char g_second_d;
char g_third_d;

char g_comma = ',';
char g_space = ' ';
char g_first_d = '0';
char g_second_d = '1';
char g_third_d = '2';

void	ft_print_result(char first_c, char second_c, char third_c)
{
	write(1, &first_c, 1);
	write(1, &second_c, 1);
	write(1, &third_c, 1);
	if (first_c != '7' || second_c != '8' || third_c != '9')
	{
		write(1, &g_comma, 1);
		write(1, &g_space, 1);
	}
}

void	ft_print_comb(void)
{
	while (g_first_d <= '7')
	{
		while (g_second_d < '8')
		{
			while (g_third_d < '9')
			{
				ft_print_result(g_first_d, g_second_d, g_third_d);
				++g_third_d;
			}
			ft_print_result(g_first_d, g_second_d, g_third_d);
			++g_second_d;
		}
		ft_print_result(g_first_d, g_second_d, g_third_d);
		++g_first_d;
		g_second_d = g_first_d + 1;
		g_third_d = g_first_d + 2;
	}
}
