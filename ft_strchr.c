/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:21:30 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/05/19 19:02:53 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	character;

	str = (char *)s;
	character = (unsigned char)c;
	i = -1;
	while (s[++i] != '\0')
		if (s[i] == character)
			return (&str[i]);
	if (character == '\0')
		return (&str[i]);		
	return (0);
}
