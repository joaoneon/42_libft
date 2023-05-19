/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:19:20 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/05/19 18:28:01 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ddest;
	const char	*ssrc;

	ddest = (char *)dest;
	ssrc = (const char *)src;
	while (n-- > 0)
		*ddest++ = *ssrc++;
	return (dest);
}
