/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:08:24 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/05/19 18:52:43 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ssrc;
	size_t		i;

	ssrc = (const char *)s;
	i = 0;
	while (n-- > 0)
	{
		if (ssrc[i] == (char)c)
			return ((void *)&ssrc[i]);
		i++;
	}
	return (NULL);
}
