/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   111.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:00:28 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/15 19:54:59 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src,)
{
	int		i;

		i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '0';
	return (dest);
}

int main(void)
{
	char src[] = "aaaaa";
	char src1[] = "eeee";
	char dest[] = "bbbbbb";
	char dest1[] = "cccccc";
	char dest2 [] = "ooooo";

	printf ("%s", ft_strncpy(dest, src));
	printf ("\n%s", ft_strncpy(dest2, src2));
}
