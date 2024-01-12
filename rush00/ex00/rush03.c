/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehakcan <mehakcan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:57:23 by mehakcan          #+#    #+#             */
/*   Updated: 2023/10/22 17:47:31 by mehakcan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	ax;
	int	ay;

	ax = 1;
	ay = y;
	while (ay >= 1 && x > 0 && y > 0)
	{
		if (ax == x && x != 1 && (ay == 1 || ay == y))
			ft_putchar('C');
		else if (ax == 1 && (ay == 1 || ay == y))
			ft_putchar('A');
		else if (ax == 1 || ax == x || ay == 1 || ay == y)
			ft_putchar('B');
		else
			ft_putchar(' ');
		if (ax == x)
		{
			ft_putchar('\n');
			ax = 1;
			ay--;
		}
		else
			ax++;
	}
}
