/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:27:27 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/05/19 18:24:36 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*temp;
	size_t	check;

	check = nmemb * size;
	if (check != 0 && check / size != nmemb)
		return (NULL);
	temp = malloc(check);
	if (temp == NULL)
		return (NULL);
	ft_bzero(temp, check);
	return (temp);
}
