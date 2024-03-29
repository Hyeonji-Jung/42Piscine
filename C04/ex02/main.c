/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 16:41:48 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/09 16:43:56 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_putnbr.c"

int		main(void)
{
	ft_putnbr(42);
	printf(" : putnbr(42)\n");
	printf("\n");
	ft_putnbr(4242);
	printf(" : putnbr(4242)\n");
	printf("\n");
	ft_putnbr(20000706);
	printf(" : putnbr(20000706)\n");
	printf("\n");
	ft_putnbr(+2147483647);
	printf(" : putnbr(2147483647)\n");
	printf("\n");
	ft_putnbr(-2147483648);
	printf(" : putnbr(-2147483648)\n");
	printf("\n");
}
