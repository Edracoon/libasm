/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epfennig <epfennig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:41:17 by epfennig          #+#    #+#             */
/*   Updated: 2021/05/07 16:55:02 by epfennig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

extern size_t	ft_strlen(char *str);
extern char		*ft_strcpy(char *dst, char *src);

void	ft_main_strlen(void)
{
	printf("----ft_strlen---\n");
	printf("ft_strlen : %zu |\n", ft_strlen("Bonsoir je suis une string haha ^^"));
	printf("strlen    : %zu |\n", strlen("Bonsoir je suis une string haha ^^"));
	printf("---------------|\n");
	printf("ft_strlen : %zu |\n",  ft_strlen("haha tellement bien d'être une string :P"));
	printf("strlen    : %zu |\n", strlen("haha tellement bien d'être une string :P"));
	printf("---------------|\n");
	printf("ft_strlen : %zu |\n", ft_strlen("J'adore strlen serieux"));
	printf("strlen    : %zu |\n", strlen("J'adore strlen serieux"));
	printf("---------------|\n");
	printf("ft_strlen : %zu  |\n", ft_strlen(""));
	printf("strlen    : %zu  |\n", strlen(""));
	printf("---------------|\n");
	printf("ft_strlen : %zu  |\n", ft_strlen("\n"));
	printf("strlen    : %zu  |\n", strlen("\n"));
	printf("---------------|\n");
	printf("ft_strlen : %zu  |\n", ft_strlen("1"));
	printf("strlen    : %zu  |\n", strlen("1"));
	printf("----------------");
	printf("\n");
}

void	ft_main_strcpy()
{
	printf("----------------ft_strcpy-----------------\n");
	printf("ft_strcpy : DEST='%s'\n", ft_strcpy("Bonsoir je suis la src", "Bonsoir je suis la dest haha ^^"));
	//printf("strcpy    : DEST='%s'", strcpy("Bonsoir je suis la src", "Bonsoir je suis la dest haha ^^"));
	printf("------------------------------------------\n");
}

int	main(void)
{
	ft_main_strlen();
	ft_main_strcpy();
	//ft_main_strcmp();
	//check_write();
	//ft_main_read();
	//ft_main_strdup();
	return (0);
}