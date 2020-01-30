/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:26:00 by jcheung           #+#    #+#             */
/*   Updated: 2020/01/15 21:34:04 by jcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		ft_putchar(str[pos]);
		++pos;
	}
}

int		main(int argc, char *argv[])
{
	int i;

	i = argc - 1;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
