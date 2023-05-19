/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:30:30 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/05/19 18:30:02 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_split_assign(char const *s, char *arr, size_t j);
static char		**ft_split_helper(char const *s, char **arr, char c);
static size_t	ft_is_split(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**arr;

	if (s == NULL)
		return (NULL);
	i = ft_is_split(s, c);
	arr = malloc((i + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	arr = ft_split_helper(s, arr, c);
	return (arr);
}

static char	*ft_split_assign(char const *s, char *arr, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		arr[i] = s[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

static char	**ft_split_helper(char const *s, char **arr, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			j++;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			arr[k] = malloc((j + 1) * sizeof(char));
			if (arr[k] == NULL)
				return (NULL);
			arr[k] = ft_split_assign(&s[i - j + 1], arr[k], j);
			k++;
			j = 0;
		}
		i++;
	}
	arr[k] = NULL;
	return (arr);
}

static size_t	ft_is_split(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}
