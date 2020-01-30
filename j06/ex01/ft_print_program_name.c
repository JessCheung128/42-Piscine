/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 20:49:28 by jcheung           #+#    #+#             */
/*   Updated: 2020/01/15 21:10:31 by jcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc >= 1)
	{
		while (argv[0][i])
		{
			ft_putchar(argv[0][i++]);
		}
		ft_putchar('\n');
	}
	return (0);
}
