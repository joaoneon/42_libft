/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:56:46 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/05/19 19:18:40 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	s;
	char	*str;

	i = 0;
	str = (char *)big;
	if (ft_strlen(little) == 0)
		return (str);
	while (big[i] != '\0' && i < len)
	{
		s = 0;
		while (big[i + s] == little[s] && i + s < len)
		{
			if (little[s + 1] == '\0')
				return (&str[i]);
			s++;
		}
		i++;
	}
	return (NULL);
}
