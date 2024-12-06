/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:56:56 by vinda-si          #+#    #+#             */
/*   Updated: 2024/12/06 16:49:35 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *c)
{
	size_t	count;

	count = 0;
	while (c[count] != '\0')
		count++;
	return (count);
}

void	*ft_menset(void *s, int c, size_t n)
{
	unsigned char	*temp_str;
	size_t			count;

	temp_str = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		temp_str[count] = (unsigned char)c;
		count++;
	}
	return (s);
}

void	*ft_calloc(size_t nmenb, size_t size)
{
	void	*ptr;
	size_t	calc_size;

	if (nmenb == 0 || size == 0)
		return (malloc(0));
	if (nmenb > (size_t)-1 / size)
		return (NULL);
	calc_size = nmenb * size;
	ptr = malloc(calc_size);
	if (!ptr)
		return (NULL);
	ft_menset(ptr, 0, calc_size);
	return (ptr);
}

char	*ft_strchr(const char *s, int c)
{
	int	count;

	count = 0;
	while ((char)c != s[count])
	{
		if (s[count] == '\0')
			return (0);
		count++;
	}
	return ((char *)&s[count]);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = s1_len + s2_len + 1;
	new_str = (char *)malloc(total_len * sizeof(char));
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, s1, s1_len);
	ft_memcpy(new_str + s1_len, s2, s2_len);
	new_str[total_len - 1] = '\0';
	return (new_str);
}
