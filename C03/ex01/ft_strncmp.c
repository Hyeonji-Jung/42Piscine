/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 19:08:00 by hyeojung          #+#    #+#             */
/*   Updated: 2021/02/22 20:17:26 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	re;

	i = 0;
	while (n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			re = s1[i] - s2[i];
			return (re);
		}
		i++;
		n--;
	}
	return (0);
}
