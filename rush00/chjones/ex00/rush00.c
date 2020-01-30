/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarlhia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 09:58:04 by mcarlhia          #+#    #+#             */
/*   Updated: 2020/01/12 21:16:48 by jcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	int i;

	i = 0;
	ft_putchar('o');
	while (i < x - 2)
	{
		ft_putchar('-');
		i++;
	}
	if (x <= 1)
		ft_putchar('\n');
	else
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
}

void	mid_lane(int x, int y)
{
	int i;

	i = 0;
	if (y > 2 && x > 2)
	{
		ft_putchar('|');
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('|');
	}
	else
		ft_putchar('|');
	ft_putchar('\n');
}

void	last_lane(int x, int y)
{
	int i;

	i = 0;
	if (y >= 2)
		ft_putchar('o');
	while (i < x - 2)
	{
		ft_putchar('-');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	if (x == 1)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	if (x > 0 && y > 0)
	{
		first_line(x);
		if (y > 2)
			while (i < y - 2)
			{
				mid_lane(x, y);
				i++;
			}
		if (x >= 1 && y > 1)
			last_lane(x, y);
	}
}
