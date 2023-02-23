/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo < ytoro-mo@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:30:12 by ytoro-mo          #+#    #+#             */
/*   Updated: 2023/02/23 16:35:30 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operations.h"

int	ft_isdigit(char d)
{
	if (d < '0' || d > '9')
	{
		printf("Error: bad expression");
		return (1);
	}
	return (0);
}

int	ft_isoperator(char o)
{
	if (o != '+' && o != '-' && o != '*' && o != '/')
	{
		printf("Error: bad expression");
		return (1);
	}
	return (0);
}

int	ft_isspace(char s)
{
	if (s != ' ')
	{
		printf("Error: bad expression");
		return (1);
	}
	return (0);
}

char	*in_read(char *str)
{
	char	*exp;

	exp = malloc(sizeof(char) * 3);
	if (!ft_isdigit(str[0]))
		exp[0] = str[0];
	else
		return (NULL);
	if (!ft_isoperator(str[2]))
		exp[1] = str[2];
	else
		return (NULL);
	if (!ft_isdigit(str[4]))
		exp[2] = str[4];
	else
		return (NULL);
	return (exp);
}

int	main(int argc, char **args)
{
	char	*exp;

	if (strlen(args[1]) > 5 || ft_isspace(args[1][1]) || ft_isspace(args[1][3])
		|| argc != 2)
	{
		printf("Error: bad expression");
		return (1);
	}
	exp = in_read(args[1]);
	if (exp == NULL)
		return (1);
	if (exp[1] == '+')
		printf("%i\n", op_add(atoi(&exp[0]), atoi(&exp[2])));
	if (exp[1] == '-')
		printf("%i\n", op_sub(atoi(&exp[0]), atoi(&exp[2])));
	if (exp[1] == '*')
		printf("%i\n", op_mul(atoi(&exp[0]), atoi(&exp[2])));
	if (exp[1] == '/')
		printf("%i\n", op_div(atoi(&exp[0]), atoi(&exp[2])));
	return (0);
}
