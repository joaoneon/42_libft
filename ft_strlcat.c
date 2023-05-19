/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:16:33 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/05/19 18:31:59 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_len;
	size_t	d_len;
	size_t	i;
	size_t	j;

	if (src == NULL || dst == NULL)
		return (0);
	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	j = d_len;
	if (size <= d_len)
		return (s_len + size);
	i = 0;
	while (src[i] != '\0' && j < size - 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (d_len + s_len);
}
