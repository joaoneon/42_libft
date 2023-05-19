/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:41:08 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/05/19 19:10:04 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	character;

	i = ft_strlen(s);
	str = (char *)s;
	character = (unsigned char)c;
	if (character == '\0')
		return (&str[i]);
	while (--i >= 0)
		if (str[i] == character)
			return (&str[i]);
	return (0);
}
