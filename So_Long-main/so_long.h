/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:02:36 by toaktas           #+#    #+#             */
/*   Updated: 2023/08/18 15:32:12 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

# define IMG_SIZE 50

typedef struct  l_data
{
    char        **map;
    char        *mlx;
    char        *win;
    char        *map_tmp;
    int         map_width;
    int         map_height;
    int         player_x;
    int         player_y;
    int         player_count;
    int         exit_count;
    int         exit_x;
    int         exit_y;
    int         wall_count;
    int         coin_count;
    int         unwanted_character_count;
    int         coin_collected;
    int         step_count;
    t_image     img;
    t_int_map   i_map;
}               t_data;

#endif