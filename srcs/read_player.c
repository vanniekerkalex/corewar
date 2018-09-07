/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <avan-ni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 16:20:22 by avan-ni           #+#    #+#             */
/*   Updated: 2018/09/06 23:39:32 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cw.h"
#include <stdio.h>

/*int ft_count_chars()
{
    char *line;
    char *str;
    char *tmp;
    int len;

    len = 0;
    str = NULL;
    while (get_next_line(0, &line))
    {
        tmp = ft_strjoin(str, line);
        str = ft_strdup(tmp);
        free(tmp);
        free(line);
    }
    len = ft_strlen(str);
    free(str);
    return (len);
}*/

char *ft_store_player()
{
    char *str;
    char *line;
    char *tmp;

    str = NULL;
    tmp = NULL;
    while (get_next_line(0, &line))
    {
        if (!ft_strcmp(line, ""))
        {
            free(line);
            return (str);
        }
        else
        {
            tmp = ft_strjoin(str, line);
            free(str);
            free(line);
            str = ft_strdup(tmp);
            free(tmp);
        }
    }
    free(line);
    return (str);
}

char    *ft_convert_cor_data(char *str)
{
    char *tmp;
    int i;

    tmp = NULL;
    i = 0;
    while (*(str + i))
    {

    }
    return (0);
}