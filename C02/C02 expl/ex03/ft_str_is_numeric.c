/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:25:33 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/19 15:59:58 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= '0' && str[a] <= '9')
			a++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_str_is_numeric("357354131"));
	printf("\n%d", ft_str_is_numeric("EsteSale0"));
	printf("\n%d", ft_str_is_numeric("$%^Este0tambien^&&"));
}*/

/*igual que el anterior pero devuelve 1 si contiene digitos y 0 si no*/