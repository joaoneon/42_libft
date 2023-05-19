/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:18:51 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/05/19 18:32:50 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*nstr;
	int		i;

	str = (char *)s;
	nstr = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (nstr == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		nstr[i] = (*f)(i, str[i]);
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}
