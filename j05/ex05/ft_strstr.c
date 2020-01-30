/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 10:22:28 by jcheung           #+#    #+#             */
/*   Updated: 2020/01/14 17:01:02 by jcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *a;
	char *b;

	b = to_find;
	if (*b == 0)
		return (char*)str;
	while (*str != 0)
	{
		str += 1;
		if (*str != *b)
			continue;
		a = str;
		while (1)
		{
			if (*b == 0)
				return (char*)str;
			if (*a++ != *b++)
				break ;
		}
		b = to_find;
	}
	return (0);
}
