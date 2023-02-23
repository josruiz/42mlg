/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:00:28 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/19 13:04:43 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
/*
int main(void)
{
	char src[] = "aaaaa";
	char dest[] = "bbbbbb";
	char dest1[] = "cccccc";

	printf ("%s", ft_strncpy(dest, src, 2));
	printf ("\n%s", ft_strncpy(dest1, src, 2));
	printf ("\n%s", ft_strncpy(dest, src, 4));
	printf ("\n%s", ft_strncpy(dest1, src, 4));
	printf ("\n%s", ft_strncpy(dest, src, 6));
	printf ("\n%s", ft_strncpy(dest1, src, 6));
}*/

/*Es como el anterior pero con la n, es decir
la n la utilizo para decirle hasta que caracter quiero que me copie*/
