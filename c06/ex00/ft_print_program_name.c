/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehakcan <mehakcan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:04:36 by mehakcan          #+#    #+#             */
/*   Updated: 2023/11/08 15:06:58 by mehakcan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char	**argv)
{
	int	c;

	c = 0;
	if (argc > 0)
	{
		while (argv[0][c] != '\0')
		{
			write(1, &argv[0][c], 1);
			c++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
