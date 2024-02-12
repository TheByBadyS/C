/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_control.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:46:01 by toaktas           #+#    #+#             */
/*   Updated: 2023/08/18 16:15:33 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    size_control(t_data *data)
{
    int     fd;
    char    *line;
    int     y;
    int     x;

    y = 0;
    fd = open(data->map_tmp, O_RDONLY);
    line = get_next_line(fd);
    x = ft_strlen(line);
    while (1)
    {
        free(line);
        y++;
        line = get_next_line(fd);
        if (line[0] == '\0')
            break ;
        if (x != (int)ft_strlen(line) && line[0] != '\0')
            err_msg("Error : Map is not rectangular 4x4");
    }
    if (!line)
        free(line);
    data->map_height = y;
    data->map_width = x - 1;
    close(fd);
}
