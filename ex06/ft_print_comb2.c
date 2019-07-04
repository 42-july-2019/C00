/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 17:08:57 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/04 18:21:04 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

void	ft_print_curr_comb(int first_nb, int second_nb)
{
	if (first_nb <= 9)
	{
		ft_putchar('0');
	}
	ft_putnbr(first_nb);
	ft_putchar(' ');
	if (second_nb <= 9)
	{
		ft_putchar('0');
	}
	ft_putnbr(second_nb);
	if (first_nb != 98 || second_nb != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_print_curr_comb(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}
