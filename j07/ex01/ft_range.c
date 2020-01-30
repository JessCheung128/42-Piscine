/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 19:20:06 by jcheung           #+#    #+#             */
/*   Updated: 2020/01/16 21:23:02 by jcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *array;
	int	i;
	int n;

	n = 0;
	i = max - min;
	if (min >= max)
		return (0);
	array = (int*)malloc(i * sizeof(int));
	array[0] = min;
	while (min <= max)
	{
		array[n] = min;
		min++;
		n++;
	}
	return (array);
}
