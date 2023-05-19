/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:07:56 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/05/19 18:26:56 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_putnbr_itoa(int n, char *str, int i);
static int	ft_get_index(int n);

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = ft_get_index(n);
	str = malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str = ft_putnbr_itoa(n, str, i - 1);
	str[i] = '\0';
	return (str);
}
static int	ft_get_index(int n)
{
	int	temp;
	int	i;

	i = 1;
	temp = n;
	if (n == -2147483648)
	{
		i++;
		temp = -214748364;
	}
	if (n < 0)
	{
		temp *= -1;
		i++;
	}
	while (temp > 10)
	{
		temp = temp / 10;
		i++;
	}
	return (i);
}

static char	*ft_putnbr_itoa(int n, char *str, int i)
{
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_itoa((n / 10), str, i - 1);
		n = n % 10;
	}
	str[i] = (n + 48);
	return (str);
}
