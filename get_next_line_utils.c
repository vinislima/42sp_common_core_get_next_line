/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:56:56 by vinda-si          #+#    #+#             */
/*   Updated: 2024/12/04 15:46:30 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t	ft_strlen(const char *str)
{
	const char	*s;

	if (!str)
		return (0);
	while (*s)
		s++;
	return (s - str);
}

void	strsubst(char **a, char *b)
{
	free(*a);
	*a = b;
}

char	*strnjoin(char *s1, char *s2, size_t n)
{
	size_t	s1_len;
	size_t	i;
	char	*exit;

	s1_len = ft_strlen(s1);
	exit = malloc(s1_len + n +1);
	if (!exit)
		return (NULL);
	i = 0;
	if (s1)
		while (*s1)
			exit[i++] = *(s1++);
	while (*s2)
	
}