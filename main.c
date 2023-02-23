/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo < ytoro-mo@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:30:12 by ytoro-mo          #+#    #+#             */
/*   Updated: 2023/02/23 15:41:52 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char d)
{
	if (d < '0' || d > '9')
		return (1);
	else
		return (0);
}

int	ft_isoperator(char o)
{
	if (o != '+' && o != '-' && o != '*' && o != '/')
		return (1);
	else
		return (0);
}

ft_isspace(char s)
{
	if (d != ' ')
		return (1);
	return (0);
}

char	*in_read(char * str)
{
	char	exp[3];

	exp[0] = str[0];
	exp[1] = str[2];
	exp[2] = str[4];
	return (exp);
}

int	main(int argc, char **args)
{
	return (0);
}
