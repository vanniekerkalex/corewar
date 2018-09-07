/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <avan-ni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 18:11:07 by avan-ni           #+#    #+#             */
/*   Updated: 2018/09/06 17:31:14 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_numlen(int value, int base)
{
    int i;
    int nbr;

    i = 0;
    nbr = value;
    if ((nbr < 0 && base == 10) || nbr == 0)
        i++;
    while (nbr)
    {
        i++;
        nbr /= base;
    }
    return (i);
}

char *ft_itoa_base(int value, int base)
{
    char *str;
    char *num;
    char c;
    int i;
    int nbr;

    str = "0123456789ABCDEF";
    i = ft_numlen(value, base) - 1;
    nbr = value;
    if (value == -2147483648 && base == 10)
        return ("-2147483648");
    if (nbr == 0)
        return ("0");
    if (!(num = (char *)malloc(sizeof(char) * (i + 2))))
        return (0);
    (base == 10 && nbr < 0) && (num[0] = '-');
    (base == 10 && nbr < 0) && (nbr = -nbr);
    while (nbr)
    {
        c = str[nbr % base];
        num[i--] = c;
        nbr /= base;
    }
    num[ft_numlen(value, base)] = '\0';
    return (num);
}