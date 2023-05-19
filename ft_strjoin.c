/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:57:16 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/05/19 18:31:39 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*nstr;
	char	*saved;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	nstr = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (nstr == NULL)
		return (NULL);
	saved = nstr;
	while (s1_len-- > 0)
		*nstr++ = *s1++;
	while (s2_len-- > 0)
		*nstr++ = *s2++;
	*nstr = '\0';
	return (saved);
}
