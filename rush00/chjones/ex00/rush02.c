/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 21:17:51 by jcheung           #+#    #+#             */
/*   Updated: 2020/01/12 21:18:10 by jcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	int i;

	i = 0;
	ft_putchar('A');
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (x <= 1)
		ft_putchar('\n');
	else
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
}

void	mid_lane(int x, int y)
{
	int i;

	i = 0;
	if (y > 2 && x > 2)
	{
		ft_putchar('B');
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('B');
	}
	else
		ft_putchar('B');
	ft_putchar('\n');
}

void	last_lane(int x, int y)
{
	int i;

	i = 0;
	if (y >= 2)
		ft_putchar('C');
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('C');
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
