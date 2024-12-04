/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:56:36 by vinda-si          #+#    #+#             */
/*   Updated: 2024/12/04 14:46:42 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	 fill_null_buffer(char buffer[BUFFER_SIZE + 1])
{
	size_t	i;
	
	i = 0;
	while (i < BUFFER_SIZE + 1)
	{
		buffer[i] = '\0';
		i++;
	}
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*exit;
	size_t		i;

	if (fd < 0 || fd > FOPEN_MAX || BUFFER_SIZE < 0)
		return (NULL);
	exit = NULL;
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\n' && buffer[i + 1])
		strsubst(&exit, strnjoin(exit, buffer + i + 1, BUFFER_SIZE));
	clean_buffer(buffer);
	while (read(fd, buffer, BUFFER_SIZE) > 0)
	{
		i = 0;
		while (buffer[i] && buffer[i] != '\n')
			i++;
		strsubst(&exit, strnjoin(exit, buffer, i + 1));
		if (buffer[i] == '\n')
			break;
		clean_buffer(buffer);
	}
	return (exit);
}