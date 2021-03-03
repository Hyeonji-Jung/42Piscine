/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeojung <hyeojung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 12:45:38 by hyeojung          #+#    #+#             */
/*   Updated: 2021/03/03 16:18:13 by hyeojung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int		wd_len(char *str, char *charset)
{
	int		count;

	count = 0;
	while (*str)
	{
		if (!is_sep(*str, charset))
		{
			++count;
			while (*str && !is_sep(*str, charset))
				++str;
		}
		++str;
	}
	return (count);
}

void	ftt_strcpy(char *dest, char *from, char *to)
{
	while (from < to)
		*(dest++) = *(from++);
	*dest = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	char	*from;
	int		i;

	arr = (char **)malloc(sizeof(char *) * wd_len(str, charset) + 1);
	i = 0;
	while (*str)
	{
		if (!is_sep(*str, charset))
		{
			from = str;
			while (!is_sep(*str, charset) && *str)
				str++;
			arr[i] = (char *)malloc(str - from + 1);
			ftt_strcpy(arr[i++], from, str);
		}
		str++;
	}
	arr[i] = 0;
	return (arr);
}

int		main(void)
{
	char	**arr = ft_split("Hello--World--Hi", "--");
	int i = 0;
	while (i < 3)
		printf("%s\n", arr[i++]);
	return (0);
}