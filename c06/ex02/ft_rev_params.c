/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehakcan <mehakcan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:09:19 by mehakcan          #+#    #+#             */
/*   Updated: 2023/11/08 15:10:48 by mehakcan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	d;

	c = argc -1;
	while (c > 0)
	{
		d = 0;
		while (argv[c][d] != '\0')
		{
			write(1, &argv[c][d], 1);
			d++;
		}
		write(1, "\n", 1);
		c--;
	}
	return (0);
}
