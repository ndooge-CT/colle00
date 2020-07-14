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

	int	wp;
	int	hp;

	hp	= 0;
	while(hp < y)
	{
		wp = 0;
		while (wp < x)
		{
			if((hp == 0 && wp == 0) ||
					(hp == 0 && wp == x - 1))
				ft_putchar('A');
			else if ((hp == y - 1 && wp == 0) || 
					(hp == y -1 && wp == x - 1))
				ft_putchar('C');
			else if ((wp == 0 || wp == x - 1) ||
					(hp == 0 || hp == x - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			wp++;
		}
		ft_putchar('\n');
		hp++;
	}
}
