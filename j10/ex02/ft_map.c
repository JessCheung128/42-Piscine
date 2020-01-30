/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:27:36 by jcheung           #+#    #+#             */
/*   Updated: 2020/01/20 16:27:57 by jcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*new_tab;

	i = -1;
	if (!(new_tab = (int *)malloc(sizeof(int) * length + 1)))
		return (NULL);
	while (++i < length)
		new_tab[i] = f(tab[i]);
	return (new_tab);
}
