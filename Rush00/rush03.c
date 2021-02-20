/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 13:27:47 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/20 13:57:43 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush03(int x, int y)
{
	int		xx;
	int		yy;

	yy = 1;
	while (yy <= y)
	{
		xx = 1;
		while (xx <= x)
		{
			if ((yy == 1 && xx == 1) || (yy == y || xx == 1))
				ft_putchar('A');
			else if ((yy == 1 && xx == x) || (yy == y && xx == x))
				ft_putchar('C');
			else if ((xx > 1 && xx < x) && (yy == 1 || yy == y))
				ft_putchar('B');
			else if ((yy > 1 && yy < y) && (xx == 1 || xx == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			xx++;
		}
		yy++;
		ft_putchar('\n');
	}
}