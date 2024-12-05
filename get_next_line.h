/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:58:59 by vinda-si          #+#    #+#             */
/*   Updated: 2024/12/05 11:58:12 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

#if BUFFER_SIZE < 0
# undef BUFFER_SIZE
# define BUFFER_SIZE 0
#endif


char	*get_next_line(int fd);
void	strsubst(char **a, char *b);
char	*strnjoin(char *s1, char *s2, size_t n);
void	*ft_calloc(size_t nmenb, size_t size);

#endif