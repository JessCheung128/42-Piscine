/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 21:38:40 by jcheung           #+#    #+#             */
/*   Updated: 2020/01/14 23:11:40 by jcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_atoi(char *str)
{
	int pos;
	int res;
	int neg;

	pos = 0;
	res = 0;
	neg = 1;
	while (str[pos] == ' ' || str[pos] == '\n' || str[pos] == '\t' ||
			str[pos] == '\v' || str[pos] == '\r' || str[pos] == '\f')
	{
		pos++;
	}
	if (str[pos] == '-' || str[pos] == '+')
	{
		if (str[pos] == '-')
			neg = -1;
		pos++;
	}
	while (str[pos] >= '0' && str[pos] <= '9')
	{
		res = (res * 10) + str[pos] - '0';
		pos++;
	}
	return (res * neg);
}
