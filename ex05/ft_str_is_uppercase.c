/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 19:39:41 by gd-auria          #+#    #+#             */
/*   Updated: 2023/12/11 19:44:14 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!(str[i] >= 65 && str[i] <= 'Z'))
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

	str = "A";
	ft_str_is_uppercase(str);
	printf("%d", ft_str_is_uppercase(str));
}
