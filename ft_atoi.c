/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:28:49 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/05/23 19:49:48 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		is_negative;
	int		nb;

	nb = 0;
	i = 0;
	is_negative = 1;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '\0')
		return (nb);
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			is_negative *= -1;
	while (nptr[i] >= '0' && nptr[i] <= '9')
		nb = (nb * 10) + (nptr[i++] - '0');
	return (nb * is_negative);
}
