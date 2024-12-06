/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:58:59 by vinda-si          #+#    #+#             */
/*   Updated: 2024/12/06 16:40:53 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);

size_t	ft_strlen(const char *c);

void	*ft_calloc(size_t nmenb, size_t size);
void	*ft_menset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n)

#endif