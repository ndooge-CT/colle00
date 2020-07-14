/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                           		:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndooge <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 09:29:27 by ndooge            #+#    #+#             */
/*   Updated: 2020/07/14 09:47:35 by ndooge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int wp;
	int hp;

	hp = 1;
	while (hp <= y)
	{
		wp = 1;
		while (wp <= x)
		{
			if ((wp == 1 && hp == 1) || (wp == 1 && hp == y))
				ft_putchar('A');
			else if (wp > 1 && wp < x && hp > 1 && hp < y)
				ft_putchar(' ');
			else if ((wp == x && hp == 1) || (wp == x && hp == y))
				ft_putchar('C');
			else 
				ft_putchar('B');
			wp++;
		}
		ft_putchar('\n');
		hp++;
	}
}
