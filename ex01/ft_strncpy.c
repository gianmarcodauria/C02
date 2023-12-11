/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:15:53 by gd-auria          #+#    #+#             */
/*   Updated: 2023/12/07 19:49:07 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
	
	
}

int main()
{
	char 	dest[] = "Ciaooooooooo";
	char	src[] = "Ciao mondo";
	unsigned int n;

	n = 12;
	ft_strncpy(dest, src, n);
	printf("%s", dest);
	return 0;
}
