/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joruiz-c <joruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:00:08 by joruiz-c          #+#    #+#             */
/*   Updated: 2023/02/19 13:14:29 by joruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	if (str[a] == '\0')
	{
		return (1);
	}
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
			a++;
		else if (str[a] >= 'a' && str[a] <= 'z')
			a++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_str_is_alpha("abcdefghijklmnopqrstuvwxz"));
	printf("\n%d", ft_str_is_alpha("a1b2c3d4e5f6"));
	printf("\n%d", ft_str_is_alpha("-+'_#abc_;*$^"));
}*/

/*Creo un if que me devuelva 1 si el string esta vacio
El while para que mientras el string sea diferente de nulo
ejecute un if que siga iterando si los caracteres que encuentra
son ALFABETICOS A-Z en mayusculas O alfabeticos a-z minusculas
en ese caso me devolvera 1 y en el momento (else) en el que encuentre un 
caracter diferente devolvera 0*/