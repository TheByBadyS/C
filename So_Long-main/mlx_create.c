/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:17:51 by toaktas           #+#    #+#             */
/*   Updated: 2023/08/18 16:38:56 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void data_init(t_data *data)
{
    data->mlx =  mlx_init();
}

void    mlx_create(t_data *data)
{
    int map_finder_print_is_active;
    
    data_init(data)
}