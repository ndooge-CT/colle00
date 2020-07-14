
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c   		                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndooge <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 09:29:27 by ndooge            #+#    #+#             */
/*   Updated: 2020/07/12 10:57:35 by ndooge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{

	int	x_it;
	int	y_it;

	y_it	= 0;
	while(y_it < y)
	{
		x_it = 0;
		while (x_it < x)
		{
			if((y_it == 0 && x_it == 0) ||
					(y_it == 0 && x_it == x - 1))
				ft_putchar('A');
			else if ((y_it == y - 1 && x_it == 0) || 
					(y_it == y -1 && x_it == x - 1))
				ft_putchar('C');
			else if ((x_it == 0 || x_it == x - 1) ||
					(y_it == 0 || y_it == x - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			x_it++;
		}
		ft_putchar('\n');
		y_it++;
	}
}
