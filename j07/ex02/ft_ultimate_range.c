/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 20:49:03 by jcheung           #+#    #+#             */
/*   Updated: 2020/01/16 21:39:13 by jcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (max > min)
	{
		*range = (int *)malloc(sizeof(int) * (max - min) + 1);
		if (*range[i])
		{
			while (min < max)
				*range[i++] = min++;
		}
		return (i);
	}
	return (0);
}
