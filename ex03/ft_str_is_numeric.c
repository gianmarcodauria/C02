/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:44:21 by gd-auria          #+#    #+#             */
/*   Updated: 2023/12/11 18:04:12 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!(str[i] >= '0'  && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*str;

	str = "123abc";
	ft_str_is_numeric(str);
	printf("%d", ft_str_is_numeric(str));
}
