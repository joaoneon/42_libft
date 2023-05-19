/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:57:27 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/05/19 18:34:11 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getstartstring(char const *s1, char const *set);
static size_t	ft_getendstring(char const *s1, char const *set, size_t i);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*nstr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = ft_getstartstring(s1, set);
	j = ft_getendstring(s1, set, i);
	if (j - i + 1 <= 0)
		return (ft_strdup(""));
	nstr = malloc((j - i + 2) * sizeof(char));
	if (nstr == NULL)
		return (NULL);
	k = 0;
	while (i <= j)
		nstr[k++] = s1[i++];
	nstr[k] = '\0';
	return (nstr);
}

static size_t	ft_getstartstring(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		exit;

	i = 0;
	exit = 0;
	while (s1[i] != '\0' && exit == 0)
	{
		j = 0;
		while (s1[i] != set[j] && set[j] != '\0')
			j++;
		if (s1[i] != set[j])
		{
			exit = 1;
			i -= 1;
		}
		i++;
	}
	return (i);
}

static size_t	ft_getendstring(char const *s1, char const *set, size_t i)
{
	size_t	k;
	size_t	j;
	int		exit;

	exit = 0;
	k = ft_strlen(s1) - 1;
	while (exit == 0 && k > i)
	{
		j = 0;
		while (s1[k] != set[j] && set[j] != '\0')
			j++;
		if (s1[k] != set[j])
		{
			exit = 1;
			k += 1;
		}
		k--;
	}
	return (k);
}
