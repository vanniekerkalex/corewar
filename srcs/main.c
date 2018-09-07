/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <avan-ni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 17:28:40 by avan-ni           #+#    #+#             */
/*   Updated: 2018/09/06 22:55:11 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cw.h"
#include <stdio.h>

void    print_data(char *data)
{
    int i;

    i = 0;
    while (*(data + i))
    {
        ft_putchar(*(data + i));
        if (!(++i % 16))
            ft_putchar('\n');
    }
}

int main(void)
{
    char *data;

    data = ft_store_player();
    //print_data(data);
    return (0);
}