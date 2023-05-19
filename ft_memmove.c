/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:56:15 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/05/19 18:28:11 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ddest;
	char	*ssrc;

	ddest = (char *)dest;
	ssrc = (char *)src;
	if (ddest == ssrc)
		return (dest);
	if (ddest < ssrc)
	{
		while (n-- > 0)
			*ddest++ = *ssrc++;
		return (dest);
	}
	ddest += n - 1;
	ssrc += n - 1;
	while (n-- > 0)
		*ddest-- = *ssrc--;
	return (dest);
}
