/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 22:41:04 by jcheung           #+#    #+#             */
/*   Updated: 2020/01/16 23:42:50 by jcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour >= 0 && hour <= 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		if (hour == 0 || hour == 24)
			printf("12.00 A.M AND 1.00 A.M.\n");
		if (hour == 11)
			printf("11.00 A.M. AND 12.00 P.M.\n");
		else if (hour == 12)
			printf("12.00 P.M. AND 1.00 P.M.\n");
		else if (hour == 23)
			printf("11.00 P.M. AND 12.00 A.M.\n");
		else if (hour >= 1 && hour <= 10)
			printf("%d.00 A.M. AND %d.00 A.M.\n", (hour), (hour + 1));
		else if (hour >= 13 && hour <= 22)
			printf("%d.00 P.M. AND %d.00 P.M.\n", (hour - 12), (hour - 11));
	}
}
