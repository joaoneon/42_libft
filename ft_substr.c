/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:03:34 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/05/19 18:34:30 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*str;
	char	*dest;

	if (s == NULL)
		return (NULL);
	str = (char *)s;
	slen = ft_strlen(str);
	if (start > slen)
		return (ft_strdup("\0"));
	if (start + len > slen)
		dest = (char *)malloc(slen - start + 1 * sizeof(char));
	else
		dest = (char *)malloc(len + 1 * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, str + start, len + 1);
	return (dest);
}
