/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:44:31 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/05/03 18:10:44 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char *nptr)
{
    int i;
    int value;
    int isNegative;
    int nb;
    int result;
    
    nb = 0;
    value = 0;
    i = -1;
    isNegative = 0;
    result = 0;
    
    while (nptr[++i] != '\0')
    {
        if (nptr[i] == '+' || nptr[i] == '-')
            {
                if(nptr[i] == '-')
                    isNegative++;
                value++;
            }
        if (value >= 2)
            return (0);

        if (nptr[i] >= '0' && nptr[i] <= '9')
            {
                result = result * 10;
                nb = (nptr[i] - '0');
                result = nb + result;
            }
    }
    if (isNegative)
        return(result * -1);
    return (result);
}
    
int main(void)
{
    char s[]= "j  -3479j";
    printf("%i", ft_atoi(s));
}
            