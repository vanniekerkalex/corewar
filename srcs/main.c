/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <avan-ni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 17:28:40 by avan-ni           #+#    #+#             */
/*   Updated: 2018/09/07 18:52:02 by avan-ni          ###   ########.fr       */
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
        if (i % 16 != 0)
            ft_putchar(*(data + i));
        else
            ft_putchar('\n');
        i++;
    }
}

int main(void)
{
    char *data;
    char *conv;

    data = ft_store_player();
    conv = ft_convert_cor_data(data);
    fprintf(stdout, "0 ");
    int i;
    i = 0;
    while (*(data + i))
    {
        fprintf(stdout, "0x%02x ", data[i]);
        if ((i + 1) % 16 == 0)
        {
            fputc('\n', stdout);
            fprintf(stdout, "%d ", i / 16 + 1);
        }
        i++;
    }
    printf("\n%s\n", conv);
    return (0);
}