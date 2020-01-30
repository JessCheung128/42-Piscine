/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 19:02:58 by jcheung           #+#    #+#             */
/*   Updated: 2020/01/11 20:58:02 by jcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int num)
{
	if (num < 0 || num > 12)
		return (0);
	if (num == 0 || num == 1)
		return (1);
	if (num > 1)
		return (num * ft_recursive_factorial(num - 1));
	else
		return (0);
}
